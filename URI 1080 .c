#include <stdio.h>
 
int main() {
   int maior = 0, i, p, n;
  
    for(i=1;i<=100;i++){
     scanf("%d", &n);
     if(n > maior){
         maior = n;
         p = i;
    }
    }
    printf("%d\n%d\n",maior, p);
    return 0;
}