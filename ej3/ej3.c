#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void usage();
void apartado_a1();

int main(int argc, char *argv[]) {
  if (argc == 2) {
    int opc = atoi(argv[1]);
    switch (opc) {
      case 1: apartado_a1(); break;
      case 2: break;
      case 3: break;
      case 4: break;
      default: usage(); break;
    }
  }
  else {
    usage();
  }
}

void usage(){
  printf("OPCIONES:\n");
  printf("1: la rampa es recta y la aceleración permanece constante\n");
  printf("2: la rampa es recta y la aceleración varía linealmente\n");
  printf("3: la rampa es curva y la aceleración permanece constante\n");
  printf("4: la rampa es curva y la aceleración varía linealmente\n");
}

void apartado_a1() {
  // tomamos t_0 = 0s, x_0 = 0 ft y la aceleración constante tal que -10 ft/s² <= a(t) <= 0 ft/s²
  // queremos calcular el tiempo final mínimo t_f y la distancia recorrida por el automóvil sobre la rampa.
  float a = -10; // ft/s²
  float t_f = -88 / a; // minimizamos t_f cuando a = -10 ft/s²
  printf("El tiempo mínimo requerido para que el automóvil quede en reposo es %.2f s\n", t_f);
  float x_f = -3872 / a;
  printf("La distancia recorrida sobre la rampa es %.2f ft\n", x_f);
}