// Leia o salário mensal atual de um funcionário e o percentual de reajuste e determine o valor do novo salário.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float bruto, reajuste, reajustado;

    printf("Digite o salário bruto do funcionário: R$ ");
    scanf("%f", &bruto);

    printf("Digite o percentual de reajuste: ");
    scanf("%f", &reajuste);

    reajustado = bruto + bruto * (reajuste/100);

    printf("\nO salário reajustado do funcionário é R$ %f\n\n", reajustado);

    system("pause");
    return 0;
}
