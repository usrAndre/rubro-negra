#include <stdio.h>
#include <stdlib.h>
#include "rubroNegra.h"

rb *inicializaArvore(){
    rb *A=malloc(sizeof(rb));
    A-> rb='p';
    A->pai=NULL;
    A->esq=NULL;
    A->dir=NULL;
    
    return A;
  }

