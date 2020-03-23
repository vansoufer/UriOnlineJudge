#include <stdio.h>
 
int main() {
 
    int codigo1, uni1, codigo2, uni2;
	float valor1, valor2, total;
	
	scanf ("%d",&codigo1);
	scanf ("%d",&uni1);
	scanf ("%f",&valor1);
	scanf ("%d",&codigo2);
	scanf ("%d",&uni2);
	scanf ("%f",&valor2);
	
	if(uni1>1)
	{
		valor1 = uni1 * valor1;
	}
	if(uni2>1)
	{
		valor2 = uni2 * valor2;
	}
	total = valor1 + valor2;
	
	printf("VALOR A PAGAR: R$ %.2f\n",total);
 
    return 0;
}