#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Camiseta{

    char nome[60];
    char cor[20];
    char t;

} camiseta;


void ordenaNome(camiseta *camisetas, int tam)
{

    int i = 1, j;
    camiseta aux;

    while (i < tam)
    {

        j = i - 1;
        aux = camisetas[i];

        while (j >= 0 && strcmp(camisetas[j].nome, aux.nome) > 0)
        {

            camisetas[j + 1] = camisetas[j];
            j--;

        }
        camisetas[j + 1] = aux;
        i++;

    }

}

void ordenaCor(camiseta *camisetas, unsigned short tam)
{

    short i = 1, j;
    camiseta aux;

    while (i < tam)
    {

        j = i - 1;
        aux = camisetas[i];

        while (j >= 0 && strcmp(camisetas[j].cor, aux.cor) > 0)
        {

            camisetas[j + 1] = camisetas[j];
            j--;

        }
        camisetas[j + 1] = aux;
        i++;

    }

}

void ordenaT(camiseta *camisetas, int tam)
{

    short i = 1, j;
    camiseta aux;

    while (i < tam)
    {

        j = i - 1;
        aux = camisetas[i];

        while (j >= 0 && camisetas[j].t < aux.t)
        {

            camisetas[j + 1] = camisetas[j];
            j--;

        }
        camisetas[j + 1] = aux;
        i++;

    }

}

int main ()
{

    int qtd, i;

    scanf("%d", &qtd);

    while (true)
    {

        if (qtd == 0)
            break;

        camiseta camisetas[qtd];
        for (i = 0; i < qtd; i++)
        {
            scanf(" %[^\n]", camisetas[i].nome);
            scanf("%s %c", camisetas[i].cor, &camisetas[i].t);
        }

        ordenaNome(camisetas, qtd);
        ordenaT(camisetas, qtd);
        ordenaCor(camisetas, qtd);

        for (i = 0; i < qtd; i++)
            printf("%s %c %s\n", camisetas[i].cor, camisetas[i].t, camisetas[i].nome);

        scanf("%d", &qtd);
        if (qtd != 0)
            printf("\n");
    }

}
