#include <stdio.h>
#include <stdlib.h>
#include "rubroNegra.h"

void insereNoRB(rb *A, int valorNo){
 rb* A=malloc(sizeof(valorNo));
    rb->valorNo=valorNo;
    A->esq=NULL;
    A->dir=NULL;
    A->pai= NULL;
    
    return ;
}