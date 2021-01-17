#include <stdio.h>
#include <malloc.h>

int main(){
    int n = 10;
    int i;
    printf("Tamanho de um 'int' em bytes: %li\n", sizeof(int));
    int* arranjo = (int*) malloc(sizeof(int)*n);
    printf("Endereco em memoria: %p\n", arranjo);   

    /*Armazenando valores na memoria*/

    for (i=0;i<n;i++){
      arranjo[i] = i+1;
    } 

    int* posicaoDeArmazenamento = arranjo;

    /*Imprimindo valores armazenados*/
    for (i=0;i<n;i++){
      printf("Posicao: %p,  valor: %i\n", posicaoDeArmazenamento, *posicaoDeArmazenamento);
      posicaoDeArmazenamento++;
    }

    free(arranjo);

    return 0;
}

/*
Tamanho de um 'int' em bytes: 4
Endereco em memoria: 0x62e010
Posicao: 0x62e010,  valor: 1
Posicao: 0x62e014,  valor: 2
Posicao: 0x62e018,  valor: 3
Posicao: 0x62e01c,  valor: 4
Posicao: 0x62e020,  valor: 5
Posicao: 0x62e024,  valor: 6
Posicao: 0x62e028,  valor: 7
Posicao: 0x62e02c,  valor: 8
Posicao: 0x62e030,  valor: 9
Posicao: 0x62e034,  valor: 10
*/