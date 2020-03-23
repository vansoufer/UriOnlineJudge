#include <stdio.h>
 
int main() {
 
	int X, N, i, in, out;
	in=out=0;
	scanf("%d", &N);
	for(i = 0; i < N; i++)
	{
		scanf("%d", &X);
		if(X>=10 && X<=20)
		{
			in++;
		}else{
			out++;
		}
	}
	printf("%d in\n",in);
	printf("%d out\n",out);
 
    return 0;
}