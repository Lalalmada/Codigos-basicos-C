#include <stdio.h>
#include <malloc.h>
#define alturaMaxima 225

typedef struct
{
  int peso; // peso em quilogramas
  int altura; // altura em centimetros
} pesoAltura;

int main() {
  pesoAltura pessoa1;
  pessoa1.peso = 80;
  pessoa1.altura = 185;

  if (pessoa1.altura > alturaMaxima) {
    printf("Altura acima da maxima.\n");
  }
  else printf("Altura abaixo da maxima.\n");

  printf("Peso: %i, Altura %i.\n", pessoa1.peso, pessoa1.altura);
 
  return 0;
}

/*
Altura abaixo da maxima.
Peso: 80, Altura 185.
*/