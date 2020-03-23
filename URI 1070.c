#include <stdio.h>
 
int main() {
 
	int n, i;
	scanf("%d",&n);
	i=0;
	while(i<6)
	{
		if(n%2!=0)
		{
			printf("%d\n",n);
			i=i+1;
		}
		n=n+1;
	}
 
    return 0;
}