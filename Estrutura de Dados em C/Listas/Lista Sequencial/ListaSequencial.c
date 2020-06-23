struct lista {
  int qtd;
  struct aluno dados[MAX];
};

Lista* cria_lista() {
  Lista *li;
  li = (Lista*) malloc(sizeof(struct lista));
  if(li != NULL)
    li -> qtd = 0;
  return li;  
}

int insere_lista_final(Lista* li, struct aluno a1){
  if(li == NULL)
    return 0;
  if(lista_cheia(li))
    return 0;
  li -> dados[li->qtd] = a1;
  li -> qtd++;
  return 1;
}

int insere_lista_inicio(Lista* li, struct aluno a1){
  if(li == NULL)
    return 0;
  if(lista_cheia(li))
    return 0;
  int i;
  for(i = li -> qtd - 1; i >= 0; i--)
    li -> dados[i+1] = li -> dados[i];

  li -> dados[0] = a1;
  li -> qtd++;
  return 1;
}

int insere_lista_ordenada(Lista* li, struct aluno a1){
  if(li == NULL)
    return 0;
  if(lista_cheia(li))
    return 0;
  int k,i = 0;
  while(i < li -> qtd && li -> dados[i].matricula < al.matricula)
    i++;

  for(k = li -> qtd - 1; k >= i; k--)
    li -> dados[k+1] = li -> dados[k];

  li -> dados[i] = a1;
  li -> qtd++;
  return 1;
}