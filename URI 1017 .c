#include <stdio.h>
main() {
	
	double hrs, veloc, litros;
	
	scanf("%lf", &hrs);
	scanf("%lf", &veloc);
	
	litros = (hrs * veloc) / 12;
	
	printf("%.3lf\n", litros);
	
	return 0;
}