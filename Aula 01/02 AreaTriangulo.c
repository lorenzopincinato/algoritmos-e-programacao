// Determine a área de um triângulo.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float base, altura, area;

    printf("Digite a base do triângulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triângulo: ");
    scanf("%f", &altura);

    area = (base * altura)/2;

    printf("\nA Área desse triângulo é %f\n\n", area);

    system("pause");
    return 0;
}
