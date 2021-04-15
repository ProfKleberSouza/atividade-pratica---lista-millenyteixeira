#include <assert.h>
#include <stdio.h>
#include "lista.h" 

int main(){

  Lista *estoque;

  estoque = (Lista*)malloc(sizeof(Lista));

  new_lista(estoque);
  
  Produto p;
  p.codigo=1;
  p.quantidade=1;
  p.valor=1;
  p.descricao[1]=1;

  add_lista_begin(estoque, p);

  assert(estoque->inicio->prox->dado.codigo==1 &&estoque->inicio->prox->dado.quantidade==1 && estoque->inicio->prox->dado.valor==1 && estoque->inicio->prox->dado.descricao[1]==1);

  free(estoque);

  return 0;

}