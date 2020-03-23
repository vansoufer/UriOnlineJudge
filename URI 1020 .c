#include <stdio.h>

main () {
 	
	int idd, ano, mes, dia;

 	scanf("%d", &idd);

	ano = idd / 365;
	mes = (idd % 365) / 30;  
	dia = (idd % 365) % 30;

 	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, dia);

    return 0;
}