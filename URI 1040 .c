#include <stdio.h>

main(){
	
	float n1, n2, n3, n4, media, exame, aux;
	
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	media = (n1 * 2 + n2 * 3 + n3 * 4 + n4) / 10;
	printf("Media: %.1f\n", media);
	
	if(media >= 7.0){
		printf("Aluno aprovado.\n");
	}
	else if (media >= 5.0 )
    {
        printf("Aluno em exame.\n");
        scanf("%f", &exame);
        printf("Nota do exame: %.1f\n", exame);
        aux = exame + media / 2.0;
        if (aux > 5.0){
            printf("Aluno aprovado.\n");
        }
        else{
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n", (exame + media ) / 2.0);
    }
    else{
        printf("Aluno reprovado.\n");
    }
    return 0;
}
