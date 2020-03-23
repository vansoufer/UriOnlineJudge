#include <stdio.h>

main() {
	
	int A, B, C, D, somab, somacd;
	
	scanf("%d %d %d %d", &A, &B, &C, &D);
	
	somab = A + B;
	somacd = C + D;
	
	if((B > C) && (D > A) && (somacd > somab) && ( C > 0) && (D > 0) && (A % 2 == 0)){
		
		printf("Valores aceitos\n");

	} else {
		
		printf("Valores nao aceitos\n");
	}
	return 0;
}