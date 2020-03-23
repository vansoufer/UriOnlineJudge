#include <stdio.h>
main() {
	
	int n1, n2, n3, menor, maior, meio;
	scanf("%d %d %d", &n1, &n2, &n3);
	if(n1 < n2 && n1 < n3){
        menor = n1;
        if(n2 < n3){
            meio = n2;
            maior = n3;
        }else{
            meio = n3;
            maior = n2;
        }
    }else if(n2 < n1 && n2 < n3){
        menor = n2;
        if(n1 < n3){
            meio = n1;
            maior = n3;
        }else{
            meio = n3;
            maior = n1;
        }
    }else{
        menor = n3;
        if(n1 < n2){
            meio = n1;
            maior = n2;
        }else{
            meio = n2;
            maior = n1;
        }
	}
	
	printf("%d\n%d\n%d\n", menor, meio, maior);
	printf("\n");
	printf("%d\n%d\n%d\n", n1, n2, n3);
	
	return 0;
}