/* 
 * File:   rubroNegra.h
 * Author: aluno
 *
 * Created on 18 de Maio de 2017, 15:58
 */

#ifndef RUBRONEGRA_H
#define	RUBRONEGRA_H


typedef struct rb
{
    int raiz;
    char cor;
    struct rb *esq;
    struct rb *dir;
    struct rb *pai;
}rb;

//Inicializa a árvore Rubro Negra, criando a sentinela com raiz = -1000 e preta
rb *inicializaArvore();

//Insere o nó na árvore normalmente. Ao final, chama a função balanceamentoRBInsercao
void insereNoRB(rb *A, int valorNo);

//Rotação à esquerda
void rotacaoEsq(rb *A, rb *noDesbalanceado);

//Rotação à direita
void rotacaoDir(rb *A, rb *noDesbalanceado);

//Percorre a árvore em ordem.
// No caso da sentinela *A deve ser A->dir
// Mostrar a cor do nó
void percorreOrdem(rb *A);

//Chama as rotações corretas para ajustar o balanceamento e faz o ajuste correto dos FBs
void balanceamentoRBInsercao(rb *A, rb *noInserido);

#endif	/* RUBRONEGRA_H */

