#include <stdio.h>
#include <stlib.h>
#include "ListaSequencial.h"

int main(){
  Lista *li;
  li = cria_lista();
  int x = insere_lista_final(li, dados_aluno);
  int x = insere_lista_inicio(li, dados_aluno);
  int x = insere_lista_ordenada(li, dados_aluno);
  
  system("pause");
  return 0;
}