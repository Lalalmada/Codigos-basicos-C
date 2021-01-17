void ordenar(LISTA* l)
#include <stdio.h>
#define MAX 50
#define ERRO -1
#define true 1
#define false 0
typedef int bool;
typedef int TIPOCHAVE;
typedef struct{
TIPOCHAVE chave;
} REGISTRO;
typedef struct {
REGISTRO A[MAX+1];
int nroElem;
} LISTA;


void inicializarLista(LISTA* l){
l->nroElem = 0;
}
void exibirLista(LISTA* l){
int i;
printf("Lista: \" ");
for (i=0; i < l->nroElem; i++)
printf("%i ", l->A[i].chave);
printf("\"\n");
}
//Gabarito (exemplo de solucao usando o metodo bolha -
//BubbleSort):
void ordenar(LISTA* l){
int ult, i;
REGISTRO temp;
for (ult=l->nroElem-1;ult>0;ult--){
for (i=0;i<ult;i++){
if (l->A[i].chave>l->A[i+1].chave){
temp = l->A[i];
l->A[i] = l->A[i+1];
l->A[i+1] = temp;
}
}
}
}