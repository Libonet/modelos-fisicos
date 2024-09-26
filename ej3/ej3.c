#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define FT_TO_M 0.3048 // valor de 1 pie en metros
#define MI_TO_M 1609.34 // valor de 1 milla en metros
#define H_TO_S 3600 // valor de 1 hora en segundos

void usage();
void apartado_a1();
void apartado_a2();

int main(int argc, char *argv[]) {
  if (argc == 2) {
    int opc = atoi(argv[1]);
    switch (opc) {
      case 1: apartado_a1(); break;
      case 2: apartado_a2(); break;
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
}

void apartado_a1() {
  float a = -10; // aceleración en ft/s^2
  a = a * FT_TO_M; // aceleración en m/s^2
  float v_0 = 60; // velocidad inicial en mi/h
  v_0 = v_0 * MI_TO_M / H_TO_S; // velocidad inicial en m/s
  
  float t = -v_0/a; // tiempo final en s
  printf("El tiempo requerido para que el automóvil quede en reposo con la aceleración constante dada es %.2f s\n", t);

  float d = - v_0 * v_0 / (2 * a); // distancia recorrida en m, como x_0 = 0m, d es igual al valor de x(t), dado por esta ecuación.
  printf("La distancia recorrida sobre la rampa es %.2f m\n", d);
}

void apartado_a2() {

}