#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    double baseRet, alturaRet, diagonalRet, perimetroRet;

    printf("Digita base do retangulo:\n");
    scanf("%lf", &baseRet);

    printf("Digita altura do retangulo:\n");
    scanf("%lf", &alturaRet);

    perimetroRet = (baseRet * 2) + (alturaRet * 2);

    diagonalRet = sqrt(pow(baseRet, 2) + pow(alturaRet, 2));

    printf("O perimetro do retangulo e %lf e a digonal e %lf:\n", perimetroRet, diagonalRet);

    printf("Programa executado com sucesso!\n");
    return 0;
}   