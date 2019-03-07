// Elabore um programa que dado o valor do concurso em reais ele calcule a quantia ganha por cada um dos ganhadores, dado que o valor será dividido entre os três primeiros da seguinte maneira: 
//      O primeiro ganhador receberá 46%;
//      O segundo receberá 32%;
//      O terceiro receberá o restante.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float total, primeiro, segundo, terceiro;

    printf("Digite a premia��o total do concurso: R$ ");
    scanf("%f", &total);

    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - (primeiro + segundo);

    printf("\nO primeiro receberá R$ %f, o segundo receberá R$ %f e o terceiro receberá R$ %f \n\n", primeiro, segundo, terceiro);

    system("pause");
    return 0;
}
