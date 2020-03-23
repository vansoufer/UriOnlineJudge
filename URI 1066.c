#include <stdio.h>
 
int main() {
 
    int v[5], i, par, imp, neg, pos;
	i=par=imp=neg=pos=0;

	while(i<5)
	{
		scanf("%d",&v[i]);
		i++;
	}
	for(i=0; i<5; i++)
	{
		if(v[i]%2==0)
		{
			par=par+1;
		}else{
			imp=imp+1;
		}

		if(v[i]>0)
		{
			pos=pos+1;
		}
		if(v[i]<0)
		{
			neg=neg+1;
		}
	}

	printf("%d valor(es) par(es)\n",par);
	printf("%d valor(es) impar(es)\n",imp);
	printf("%d valor(es) positivo(s)\n",pos);
	printf("%d valor(es) negativo(s)\n",neg);

 
    return 0;
}