#include <stdio.h>
#include <math.h>
main() {
	
	int A, B, C, MaiorAB, MaiorABC;
	
	scanf("%d %d %d", &A, &B, &C);	

	MaiorAB = (A + B + abs(A-B)) / 2;
	MaiorABC = (C + MaiorAB + abs(MaiorAB - C)) / 2;
	
	printf("%d eh o maior\n", MaiorABC);
	
	return 0;
}