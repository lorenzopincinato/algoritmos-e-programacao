// Leia o valor de duas variáveis A e B e troque-os, usando o comando de atribuição.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float primeiro, segundo, aux;

    printf("Digite o primeiro valor: ");
    scanf("%f", &primeiro);

    printf("Digite o segundo valor: ");
    scanf("%f", &segundo);

    aux = primeiro;
    primeiro = segundo;
    segundo = aux;

    printf("\nO primeiro virou %f e o segundo virou %f\n\n", primeiro, segundo);

    system("pause");
    return 0;
}
