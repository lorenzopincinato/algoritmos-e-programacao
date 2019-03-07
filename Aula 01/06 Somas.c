// Leia um número inteiro e imprima a soma do sucessor de seu triplo com o antecessor de seu dobro.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    int num, somas;

    printf("Digite um n�mero: ");
    scanf("%d", &num);

    somas = ((num * 3) + 1) + ((num * 2) - 1);

    printf("\nO resultado das somas é %d\n\n", somas);

    system("pause");
    return 0;
}
