
Celula *new_celula(){
  Celula *tmp = (Celula*) malloc(sizeof(Celula));
  tmp->prox = NULL;
  return tmp;
}

void newLista(Lista *l){
  l->inicio = l->fim = new_celula();
  l->tam = 0;
}