#include "lista.h"
//========================================
Celula *new_celula(){
  Celula *tmp = (Celula*) malloc(sizeof(Celula));
  tmp->prox = NULL;
  return tmp;
}
//========================================
void new_lista(Lista *l){

  Celula *nova = new_celula();

  f->inicio = nova;
  f->fim = nova;
  f->tam = 0;
}
//---------------------------------------------
void add_lista_begin(Lista *l, Produto p){

  Celula *nova = new_celula();
  nova->p = p;

  nova->prox = l->inicio->prox;
  l->inicio->prox = nova;
  l->tam++;

}