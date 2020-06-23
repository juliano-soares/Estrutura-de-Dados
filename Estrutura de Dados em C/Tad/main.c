#include <stdio.h>
#include <stlib.h>
#include "Ponto.h"

int main(){
  float d;
  Ponto *p, *q;

  //Ponto r; //ERRO
  p = pto_cria(10, 2);
  q = pto_cria(7, 25);
  // q -> x = 2; //ERRO
  d = pto_distancia(P, q);
  printf("Distancia entre pontos: %f \n", d);
  pto_libera(q);
  pto_libera(p);

  system("pause");
  return 0;
}