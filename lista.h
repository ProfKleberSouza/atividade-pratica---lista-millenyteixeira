#ifndef  LISTA_H
#define  LISTA_H
//========================================
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//========================================
typedef struct Produto{
  int codigo;
  char descricao[100];
  float valor;
  int quantidade;
}Produto;

//========================================
typedef struct Celula{
  Produto dado;
  struct Celula *prox;
}Celula;
//========================================
typedef struct Lista{
  Celula *inicio;
  Celula *fim;
  int tam;
}Lista;
//========================================
Celula *new_celula(){
  Celula *tmp = (Celula*) malloc(sizeof(Celula));
  tmp->prox = NULL;
  return tmp;
}
//========================================
void new_lista(Lista *l){

  Celula *nova = new_celula();

  l->inicio = nova;
  l->fim = nova;
  l->tam = 0;
}
//========================================
#endif 