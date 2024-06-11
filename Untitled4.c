#include <stdio.h>

int main() {
    int idade_atual, idade_aposentadoria, anos_ate_aposentadoria;

    printf("Digite sua idade atual: ");
    scanf("%d", &idade_atual);

    printf("Digite a idade de aposentadoria (65 para homem, 62 para mulher): ");
    scanf("%d", &idade_aposentadoria);

    if (idade_aposentadoria >= idade_atual) {
        anos_ate_aposentadoria = idade_aposentadoria - idade_atual;
        printf("Faltam %d anos para sua aposentadoria.\n", anos_ate_aposentadoria);
    } else {
        printf("Erro: A idade de aposentadoria e menor que sua idade atual.\n");
    }

    return 0;
}
