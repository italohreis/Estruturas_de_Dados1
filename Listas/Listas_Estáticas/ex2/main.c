#include "StaticList.h"
#include <stdio.h>

int main(void) {

  StaticList *lista1 = StaticList_create();

    StaticList_insert(lista1, 40);
    StaticList_insert(lista1, 5);
    StaticList_insert(lista1, 2);
    StaticList_insert(lista1, 9);
    StaticList_insert(lista1, 15);

    StaticList_print(lista1);
    printf("size: %d\n", StaticList_size(lista1));



    //printf("%s", StaticList_insert(lista1, 16) ? "elemento adicionado com sucesso" : "lista cheia, elemento nao adicionado");
    
    StaticList_print(lista1);
    
  return 0;
}