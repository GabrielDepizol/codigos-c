#include <stdio.h>

int main() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int soma = 0;
    int media = 0;

    for(int i = 0; i < 10; i++) {
        soma += numeros[i];
        media = soma/10;
    }

    printf("A media do array é: %d\n", media);

    return 0;
}
