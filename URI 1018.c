#include <stdio.h>

main () {
	
	int notas, aux;

    scanf("%d", &notas);

    printf("%d\n", notas);
    printf("%d nota(s) de R$ 100,00\n", notas/100);
    aux = (notas%100);

    printf("%d nota(s) de R$ 50,00\n", aux/50);
    aux = (aux%50);

    printf("%d nota(s) de R$ 20,00\n", aux/20);
    aux = (aux%20);

    printf("%d nota(s) de R$ 10,00\n", aux/10);
    aux = (aux%10);

    printf("%d nota(s) de R$ 5,00\n", aux/5);
    aux = (aux%5);

    printf("%d nota(s) de R$ 2,00\n", aux/2);
    aux = (aux%2);

    printf("%d nota(s) de R$ 1,00\n", aux/1);
    return 0;
}