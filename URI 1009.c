#include <stdio.h>

main () {
	char nome;
	float salario, vendas, totalv, TOTAL;
	
	scanf("%s", &nome);
	scanf("%f", &salario);
	scanf("%f", &vendas);
	
	totalv = vendas* 15 /100;
	
	TOTAL = salario + totalv;
	
	printf("TOTAL = R$ %.2f\n", TOTAL);
	
	return 0;
}