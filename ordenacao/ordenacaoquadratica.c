#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

void selecao(int *vet, int tamVet){
    int marc = 0;
    int indice;
        
    while(marc < tamVet-1){
        indice = menor(marc+1, tamVet, vet);
        if(vet[indice] < vet[marc]){
            troca(indice, marc, vet);
           marc++;  
        }
    }       
}

void troca(int menor, int marc, int *vet){
    int aux;
    aux = vet[menor];
    vet[menor] = vet[marc];
    vet[marc] = aux;
    
}

int menor(int marc, int tam, int vet[]){
    int i, menor;
    menor = vet[marc];
    int posMenor = marc;
    for(i =marc+1; i< tam; i++){
        if (vet[i] < menor){
            menor = vet[i];
            posMenor = i;
        }
    }
    return posMenor;
}