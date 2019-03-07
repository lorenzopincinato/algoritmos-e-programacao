// A gravidade da Lua é aproximadamente 17% a da Terra. Elabore um algoritmo que permita a entrada do peso na Terra e calcule seu peso na Lua.

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "portuguese");

    float terra, lua;

    printf("Digite seu peso na Terra: ");
    scanf("%f", &terra);

    lua = terra * 0.17;

    printf("\nSeu peso na Lua é %fkg\n\n", lua);

    system("pause");
    return 0;
}
