#include <stdio.h>
#include <malloc.h>

typedef struct aux {
  int cpf;
  int idade;
  struct aux* conjuge;
} PESSOA;

/* forma alternativa de representar
typedef struct PESSOA {
  int cpf;
  int idade;
  struct PESSOA* conjuge;
} PESSOA;
*/

void imprimirCPFs(PESSOA p){
  if (p.conjuge != NULL){
    printf("CPFs: %i x %i\n", p.cpf, p.conjuge->cpf);
  }
}

void envelhecer1(PESSOA p){
  p.idade++;	
}

void envelhecer2(PESSOA* p){
  p->idade++;	
}

void envelhecer3(PESSOA p){
  p.conjuge->idade++;	
}

void envelhecer4(PESSOA* p){
  p->conjuge->idade++;	
}


typedef struct{
  PESSOA turma[66];
} TURMA;

int main(){
  PESSOA pessoa1;
  PESSOA pessoa2;
  PESSOA solteira;

  pessoa1.cpf = 310000000;
  pessoa1.idade = 36;

  pessoa2.cpf = 290000000;
  pessoa2.idade = 35;

  pessoa1.conjuge = &pessoa2;
  pessoa2.conjuge = &pessoa1;

  imprimirCPFs(pessoa1);

  solteira.cpf = 230000000;
  solteira.idade = 30;
  solteira.conjuge = NULL;

  printf("Solteira: %i %i %p\n", solteira.cpf, solteira.idade, solteira.conjuge);

  printf("0. Idades: %i %i\n", pessoa1.idade, pessoa2.idade);

  envelhecer1(pessoa1);
  printf("1. Idades: %i %i\n", pessoa1.idade, pessoa2.idade);

  envelhecer2(&pessoa1);
  printf("2. Idades: %i %i\n", pessoa1.idade, pessoa2.idade);

  envelhecer3(pessoa1);
  printf("3. Idades: %i %i\n", pessoa1.idade, pessoa2.idade);

  envelhecer4(&pessoa1);
  printf("4. Idades: %i %i\n", pessoa1.idade, pessoa2.idade);

  return 0;

} 

/*
CPFs: 310000000 x 290000000
Solteira: 230000000 30 (nil)
0. Idades: 36 35
1. Idades: 36 35
2. Idades: 37 35
3. Idades: 37 36
4. Idades: 37 37
*/