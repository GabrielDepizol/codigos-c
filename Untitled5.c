#include <stdio.h>

int main() {
float mediaFinal, nota, disc1, disc2, disc3, soma, mediaMinima=6;

printf("Digite a nota de disc1: ");
scanf("%f, &disc1");

printf("Digite a nota de disc2: ");
scanf("%f, &disc2");

printf("Digite a nota de disc3: ");
scanf("%f", &disc3);

mediaFinal = (nota1 + nota2 + nota3) / 3.0;

if (mediaFinal <= media_minima) {
        printf("Parabéns! Você foi aprovado com mediaFinal %.2f\n", mediaFinal);
    } else {
        printf("Infelizmente, você foi reprovado com mediaFinal %.2f\n", mediaFinal);
    }

}
