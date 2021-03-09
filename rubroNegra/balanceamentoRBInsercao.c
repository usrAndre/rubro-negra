#include <stdio.h>
#include <stdlib.h>
#include "rubroNegra.h"


void balanceamentoRBInsercao(rb *A, rb *noInserido){
    char cortio;
    rb *pai=noInserido->pai;
    rb *avo=pai->pai;
    rb *tio;
    
    if(pai->cor=='v')
    {
        if(noInserido->raiz < avo->raiz)
        {
            tio=avo->dir;
            if(tio==NULL)
                cortio='p';
            else
                cortio=tio->cor;
            //caso1
            if(cortio=='v')
            {
                pai->cor='p';
                tio->cor='p';
                avo->cor='v';
                balanceamentoRBInsercao(A, avo);
            }
            //caso2
            if((cortio=='p')&&(noInserido->raiz>pai->raiz))
            {
                noInserido=pai;
                rotacaoEsq(A,noInserido);
                pai=noInserido->pai;
            }
            //caso3
            if((cortio=='p')&&(noInserido->raiz<pai->raiz))
            {
                pai->cor='p';
                avo->cor='v';
                rotacaoDir(A,avo);
            }
        }
        else{
            {
            tio=avo->esq;
            if(tio==NULL)
                cortio='p';
            else
                cortio=tio->cor;
            //caso1
            if(cortio=='v')
            {
                pai->cor='p';
                tio->cor='p';
                avo->cor='v';
                balanceamentoRBInsercao(A, avo);
            }
            //caso2
            if((cortio=='p')&&(noInserido->raiz > pai->raiz))
            {
                noInserido=pai;
                rotacaoEsq(A,noInserido);
                pai=noInserido->pai;
            }
            //caso3
            if((cortio=='p')&&(noInserido->raiz < pai->raiz))
            {
                pai->cor='p';
                avo->cor='v';
                rotacaoDir(A,avo);
            }
        }
        }
    }//se cor do pai = 'v';
    A->dir->cor='p';
}

