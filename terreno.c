#include <stdio.h>
#include <string.h>

int main()
{

    int larguraTerreno, comprimentoTerreno, valorDoMetroQuadrado, precoTerreno, areaTerreno;

    printf("Digita largura do terreno:\n");
    scanf("%i", &larguraTerreno);

    printf("Digita comprimento do terreno:\n");
    scanf("%i", &comprimentoTerreno);

    printf("Digita valor do metro quadrado do terreno:\n");
    scanf("%i", &valorDoMetroQuadrado);

    areaTerreno = larguraTerreno * comprimentoTerreno;

    precoTerreno = areaTerreno * valorDoMetroQuadrado;

    printf("A area do terreno e %i e o preco do terreno e %i:\n", areaTerreno, precoTerreno);

    printf("Programa executado com sucesso!\n");
    return 0;
}