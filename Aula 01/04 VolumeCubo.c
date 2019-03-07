// Calcule o volume do cubo.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float aresta, volume;

    printf("Digite o aresta do cubo: ");
    scanf("%f", &aresta);

    volume = aresta * aresta * aresta;

    printf("\nO volume do cubo é %f\n\n", volume);

    system("pause");
    return 0;
}

