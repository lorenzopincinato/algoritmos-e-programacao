// Leia um número inteiro e imprima o seu antecessor e o seu sucessor.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");
    int num, ant, suc;

    printf("Digite o um número: ");
    scanf("%d", &num);

    ant = num - 1;
    suc = num + 1;

    printf("\nO antecessor de %d é %d e o sucessor é %d\n\n", num, ant, suc);

    system("pause");
    return 0;
}
