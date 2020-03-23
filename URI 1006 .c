#include <stdio.h>
 
int main() {
 
    float A, B, C, MEDIA;
	
	scanf ("%f",&A);
	scanf ("%f",&B);
	scanf ("%f",&C);
	
	MEDIA = ( A * 0.2) + (B * 0.3) + (C * 0.5);
	
	printf ("MEDIA = %.1f\n",MEDIA);
 
    return 0;
}