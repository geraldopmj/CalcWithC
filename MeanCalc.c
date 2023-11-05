#include <stdio.h>
#include <string.h>

int main()
{
    int N, i, soma, media;
    printf("Quantas notas para calcular a media?\n");
    scanf("%i", &N);

    int vetorNotas[N];

    for (i = 0; i < N; i++)
    {
        printf("Digite uma nota:\n");
        scanf("%i", &vetorNotas[i]);
    }

    soma = 0;

    for (i = 0; i < N; i++)
    {
        soma = soma + vetorNotas[i];
    }
    media = soma / N;
    printf("A media e %i\n", media);

    printf("Programa executado com sucesso!\n");
    return 0;
}
