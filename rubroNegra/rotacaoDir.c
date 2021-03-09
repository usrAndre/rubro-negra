#include <stdio.h>
#include <stdlib.h>
#include "rubroNegra.h"


void rotacaoEsq(rb *A, rb *noDesbalanceado){
    rb *Filho=noDesbalanceado ->esq;
    if(Filho->dir!=NULL){
        noDesbalanceado->esq=Filho->dir;
        Filho->dir->pai=noDesbalanceado;
    }
    Filho->dir=noDesbalanceado;
    Filho->pai=noDesbalanceado->pai;
    if(Filho->pai->raiz<=Filho->raiz)
        Filho->pai->esq=Filho;
    else
        Filho->pai->dir=Filho;
    noDesbalanceado->pai=Filho;
    noDesbalanceado->cor='v';
    Filho->cor='v';
    return ;
}
