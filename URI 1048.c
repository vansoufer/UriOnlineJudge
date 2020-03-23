#include <stdio.h>

main (){
	float salario, reajuste, total;
	int perc;
	
	scanf("%f", &salario);
	
	if(salario <= 400.00){
		reajuste = salario * 15 /100;
		perc = 15;
		total = reajuste + salario;
	}
	else if(salario >= 400.01 && salario <= 800.00){
		reajuste = salario * 12 /100;
		perc = 12;
		total = reajuste + salario;
	}
	else if(salario >= 800.01 && salario <= 1200.00){
		reajuste = salario * 10 /100;
		perc = 10;
		total = reajuste + salario;
	}
	else if(salario >= 1200.01 && salario <= 2000.00){
		reajuste = salario * 7 /100;
		perc = 7;
		total = reajuste + salario;
	}
	else{
		reajuste = salario * 4 /100;
		perc = 4;
		total = reajuste + salario;
	}
	printf("Novo salario: %.2f\n", total);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %d %\n", perc);
	
	return 0;
}