#include <stdio.h>

int main()
{
    int vetor[5];
    int i;

    for(i=0; i<5; i++)
    {
        printf("Insira o elemento da posiçao %i :", i);
        scanf("%i", &vetor[i]);
    }

    for(i=0; i<5; i++)
    {
        printf("%i\n", vetor[i]);
    }
}
