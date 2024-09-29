#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <errno.h>

#include <math.h>

#define ANCHO_ESCALON 0.3 //cm
#define ALTURA_ESCALON 0.15 // cm

double get_double(const char* input){
  char *endptr = NULL;
  errno = 0;

  double ret = strtod(input, &endptr);

  if ((errno == ERANGE && (ret == LONG_MAX || ret == LONG_MIN)) || (errno != 0 && ret == 0)) {
    perror("strtod");
    exit(EXIT_FAILURE);
  }

  if (endptr == input) {
    fprintf(stderr, "No se encontraron digitos\n");
    exit(EXIT_FAILURE);
  }

  return ret;
}

void usage(char* progName){
  printf("%s\n", progName);
  printf("%s <velocidad_inicial: double (m/s)> <angulo: double (grados)> <reduccion_velocidad: double (%%)>\n", progName);
  printf("Si no se ingresan los valores de velocidad inicial, ");
  printf("angulo y reduccion de velocidad, se utilizan valores de ");
  printf("velocidad desde 1.8 m/s hasta 3.0 m/s con incrementos ");
  printf("de 0.6 m/s, valores de angulo desde 18 grados hasta ");
  printf("26 grados con incrementos de 4 grados, y reduccion ");
  printf("de velocidad desde 40%% y 50%%\n\n");
}

double max(const double a, const double b){
  return (a > b) ? a : b;
}

// y(t) = v0*cos(ang)*t - 1/2 g t^2
// 0 = -g/2 * t^2 + v0*cos(ang) * t - y
// t1,t2
// tiempo = max(t1,t2)
double resolver_tiempo(double const altura, double const velocidad){
  double tiempo = 0;
  double const a = 4.905, dosA = -9.81, cuatroAC = 4*(-a)*(-altura);

  double t1 = (-velocidad + sqrt(pow(velocidad, 2) - cuatroAC)) / dosA;
  double t2 = (-velocidad - sqrt(pow(velocidad, 2) - cuatroAC)) / dosA;

  tiempo = max(t1,t2);

  return tiempo;
}

double distancia_parabola(const double velocidad, const double sen_angulo, const double cos_angulo, const double posicion_inicial, const double restitucion){
  return ((pow(restitucion, 3.0) * pow(velocidad, 2.0) * sen_angulo * cos_angulo) / (4.9)) + posicion_inicial; // 4.9 == g/2
}

void test(double velocidad_inicial, double angulo, double restitucion){
  double posicion_inicial = 0.15;
  char *resultadoA="La pelota baja por las escaleras sin saltarse ningun escalon", *resultadoB="La pelota no rebota dos veces en un mismo escalon", *resultadoC=resultadoB;
  int escalon_doble_rebote = -1;

  printf("TEST: velocidad inicial=%.2lf m/s; angulo=%.2lf grados; restitucion=%.1lf\n", velocidad_inicial, angulo, restitucion);

  // Desparametrizamos las ecuaciones del tiro parabolico
  // x(t) = x0 + v0*seno(ang)*t
  // y(t) = y0 + v0*cos(ang)*t - 1/2 g t^2
  //
  // y(t) = y0 + t (v0*cos(ang) - g/2 t)
  // y(t) = 0 => t = v0*cos(ang) / (g/2)
  //
  // x-x0 / v0*seno(ang) = t
  // y(x) = cot(ang)*(x-x0) - g/2 * (x-x0 / v0*seno(ang))^2
  // y(d) = cot(ang)*(d-x0) - (g/2) * (d-x0)^2 / (v*seno(ang))^2

  // y(d) = 0 => cot(ang)*(d-x0) = (g/2) * (d-x0)^2 / (v*seno(ang))^2
  // d = (v^2*seno(ang)*cos(ang) / (g/2)) + x0
  //
  // y(d) = -0.15 => cot(ang) = ((g/2) * (d-x0) / (v*seno(ang))^2) - 0.15/(d-x0)
  // no puedo sacar d para un valor de y(d) distinto a 0.

  const double rad_angulo = (angulo * M_PI) / 180.0;
  const double coseno = cos(rad_angulo), seno = sin(rad_angulo);

  int rebotes[8] = {0};

  const double velocidad_horizontal = velocidad_inicial * seno;
  double velocidad_vertical = velocidad_inicial * coseno * restitucion; 

  // asumimos un primer rebote en 0.15m.
  rebotes[0] = 1;

  double t, distancia=0, siguiente_posicion, diff_escalon=0;
  int escalon_previo=0;
  // reviso si rebota en el mismo escalon.
  for (int escalon = 0; escalon < 8;) {
    t = resolver_tiempo((diff_escalon+1)*(-ALTURA_ESCALON), velocidad_vertical);

    distancia = posicion_inicial + velocidad_horizontal*t;

    if (distancia <= ANCHO_ESCALON) {
      rebotes[escalon] += 1;
      velocidad_vertical *= restitucion;
      posicion_inicial = distancia;
      escalon_previo = escalon;
      diff_escalon = (escalon - escalon_previo);
      // calculo en una nueva parabola.
    } else {
      // No rebota en este escalon, chequeamos el siguiente
      escalon_previo = escalon;
      escalon += distancia / ANCHO_ESCALON;
      // movemos el origen al siguiente escalon
      diff_escalon = (escalon - escalon_previo);
      posicion_inicial = posicion_inicial - diff_escalon*ANCHO_ESCALON;
    }
  }

  printf("cantidad de rebotes (escalon 1 a 8): ");
  for (int i=0; i<8; i++) {
    printf("%d ", rebotes[i]);
  }
  printf("\n");

  for (int i=0; i<8; i++) {
    if (escalon_doble_rebote == -1 && rebotes[i] >= 2) {
      escalon_doble_rebote = i;
      resultadoB = "La pelota rebota dos veces sobre un mismo escalon";
    }
    if (rebotes[i] == 0) {
      resultadoA = "La pelota se salta un escalon";
    }
  }

  printf("a) %s\n", resultadoA);
  printf("b) %s\n", resultadoB);
  if (escalon_doble_rebote != -1) {
    resultadoC = "La pelota rebota sobre el escalon";
    printf("c) %s %d al menos dos veces\n\n", resultadoC, escalon_doble_rebote+1);
  } else {
    printf("c) %s\n\n", resultadoC);
  }
}

int main(int argc, char *argv[])
{
  double velocidad_inicial; // en m/s
  double angulo; // en grados
  double perdida; // en %

  switch (argc) {
    case 1: 
      for (velocidad_inicial = 1.8; velocidad_inicial <= 3.0; velocidad_inicial += 0.6) {
        for (angulo = 18; angulo <= 26; angulo += 4) {
          for (perdida = 40; perdida <= 50; perdida += 10) {
            test(velocidad_inicial, angulo, 1-(perdida/100));
          }
        }
      }
      break;
    case 4:
      velocidad_inicial = get_double(argv[1]);
      angulo = get_double(argv[2]);
      if (angulo > 90 || angulo < 0){
        fprintf(stderr, "El angulo en que se suelta no puede ser mayor a 90 grados o menor a 0 grados\n");
        exit(EXIT_FAILURE);
      }
      perdida = get_double(argv[3]);

      test(velocidad_inicial, angulo, perdida);
      break;
    default:
      printf("Cantidad de argumentos invalida.\n");
      usage(argv[0]);
      break;
  }

  return EXIT_SUCCESS;
}
