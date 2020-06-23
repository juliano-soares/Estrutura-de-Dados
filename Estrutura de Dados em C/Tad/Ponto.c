#include <stdlib.h>
#include <math.h>
#include "Ponto.h"

// Definição do tipo de dado
struct ponto {
  float x;
  float y;
};

// Aloca e retorna um ponto com coordenadas "x" e "y"
Ponto* pto_cria(float x, float y) {
  Ponto* p = (Ponto*) malloc(sizeof(Ponto));
  if(p != null) {
    p -> x = x;
    p -> y = y;
  }
  return p;
}

void pto_libera(Ponto* p) {
  free(p);
}

void pto_acessa(Ponto* p, float x, float y) {
  p -> x = x;
  p -> y = y;
}

float pto_distancia(Ponto* p1, Ponto* p2) {
  float dx = p1 -> x - p2 -> x;
  float dy = p1 -> y - p2 -> y;
  return sqrt(dx * dx + dy * dy);
}