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

double resolventeSimplificada(int sumar, const double velocidad, const double dosA, const double cuatroAC){
  double dividendo;
  if (sumar) {
    dividendo = -velocidad + sqrt((velocidad*velocidad) - cuatroAC);
  } else {
    dividendo = -velocidad - sqrt((velocidad*velocidad) - cuatroAC);
  }
  return dividendo / dosA;
}

double max(const double a, const double b){
  return a > b ? a : b;
}

void test(double velocidad_inicial, double angulo, double perdida){
  double posicion_inicial = 0.15;
  char *resultadoA="Sin resolver", *resultadoB="Sin resolver", *resultadoC="Sin resolver";

  printf("TEST: velocidad inicial=%.2lf m/s; angulo=%.2lf grados; perdida=%.2lf%%\n", velocidad_inicial, angulo, perdida);

  const double angulo_parabola = 90 - angulo, rad_angulo = (angulo_parabola * M_PI) / 180.0;

  // cuatroAC = 2 * 0.15 * g
  // dosA = 2 * -1/2 g = -g
  const double coseno = cos(rad_angulo), seno = sin(rad_angulo), dosA = -9.8, cuatroAC = 2.94, gravedad = 9.8;

  const double velocidad_horizontal = velocidad_inicial * coseno;
  double velocidad_vertical = velocidad_inicial * seno;

  double t1, t2, siguiente_posicion;
  for (int escalon = 0; escalon < 8; escalon++) {
    velocidad_vertical = velocidad_vertical * perdida/100;

    // obtenemos el tiempo que falta para que rebote
    t1 = resolventeSimplificada(1, velocidad_vertical, dosA, cuatroAC);
    t2 = resolventeSimplificada(0, velocidad_vertical, dosA, cuatroAC);

    double t = max(t1, t2);

    // obtenemos la siguiente posicion
    siguiente_posicion = posicion_inicial + velocidad_horizontal*t;
  }
  
  

  printf("a) %s\n", resultadoA);
  printf("b) %s\n", resultadoB);
  printf("c) %s\n\n", resultadoC);
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
            test(velocidad_inicial, angulo, perdida);
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
