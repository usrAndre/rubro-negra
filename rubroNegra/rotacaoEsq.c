/* 
 * File:   rotacaoEsq.c
 * Author: aluno
 *
 * Created on 18 de Maio de 2017, 16:05
 */

#include <stdio.h>
#include <stdlib.h>
#include "rubroNegra.h"

void rotacaoEsq(rb *A, rb *noDesbalanceado){
    rb *Filho=noDesbalanceado ->dir;
    if(Filho->esq!=NULL){
        noDesbalanceado->dir=Filho->esq;
        Filho->esq->pai=noDesbalanceado;
    }
    Filho->esq=noDesbalanceado;
    Filho->pai=noDesbalanceado->pai;
    if(Filho->pai->raiz<=Filho->raiz)
        Filho->pai->dir=Filho;
    else
        Filho->pai->esq=Filho;
    noDesbalanceado->pai=Filho;
    noDesbalanceado->cor='v';
    Filho->cor='v';
    return;
}
