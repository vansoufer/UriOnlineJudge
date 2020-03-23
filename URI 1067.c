#include <stdio.h>
 
int main() {
 
    int X, i;
    i = 1;
    scanf("%d", &X);
    while (i <= X) 
    {
        if (i%2 !=0) 
		{
            printf("%d\n", i);
        }
        i++;
    }
 
    return 0;
}