#include <stdio.h>
 
int main() {
 
    double a, b, c, tri, circ, trap, quad, ret, pi;
	scanf ("%lf",&a);
	scanf ("%lf",&b);
	scanf ("%lf",&c);
	pi = 3.14159;
	tri = (a * c) / 2;
	circ = (c * c) * pi;
	trap = ((a + b) * c) / 2;
	quad = b * b;
	ret = a * b;
	printf ("TRIANGULO: %.3lf\n",tri);
	printf ("CIRCULO: %.3lf\n",circ);
	printf ("TRAPEZIO: %.3lf\n",trap);
	printf ("QUADRADO: %.3lf\n",quad);
	printf ("RETANGULO: %.3lf\n",ret);
 
    return 0;
}