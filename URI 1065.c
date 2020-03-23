#include <stdio.h>
 
int main() {
 
	int n, i, par;
	par=i=0;
	while(i<5)
	{
		scanf("%d",&n);
		if(n%2==0)
		{
			par=par+1;		
		}
		i++;
	}
	printf("%d valores pares\n",par);
 
    return 0;
}