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

    if (media > 70)
    {
        printf("A media das notas e %i e vc foi aprovado!\n", media);
    }
    else
    {
        printf("A media das notas e %i e vc foi reprovado!\n", media);
    }

    printf("Programa executado com sucesso!\n");
    return 0;
}
