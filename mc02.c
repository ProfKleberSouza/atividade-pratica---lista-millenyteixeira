void add_lista_begin(Lista *l, Produto p){

  Celula *nova = new_celula();
  nova->p = p;

  nova->prox = l->inicio->prox;
  l->inicio->prox = nova;
  l->tam++;

}