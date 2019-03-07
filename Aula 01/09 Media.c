// Permita a entrada de três valores e calcule a média aritimética entre eles.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    float v1, v2, v3, media;

    printf("Digite o primeiro valor: ");
    scanf("%f", &v1);

    printf("Digite o segundo valor: ");
    scanf("%f", &v2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &v3);

    media = (v1 + v2 + v3)/3;

    printf("\nA média entre os três valores é %f \n\n", media);

    system("pause");
    return 0;
}
