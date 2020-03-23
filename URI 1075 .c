#include <stdio.h>
 
int main() {
 
    int N, i;
    i=0;
    scanf("%d",&N);
    while(i<10000)
    {
        if(i%N==2)
        {
            printf("%d\n",i);
        }
        i++;
    }
 
    return 0;
}