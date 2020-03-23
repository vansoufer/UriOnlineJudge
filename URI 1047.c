#include <stdio.h>

main(){
    int inicioh, iniciom, fimh, fimn, tempoh, tempom;

    scanf("%d %d %d %d", &inicioh, &iniciom, &fimh, &fimn);

    tempoh = fimh - inicioh;
	tempom = fimn - iniciom;
	
    if (tempoh < 0)
    {
        tempoh = 24 + (fimh - inicioh);
    }
 	if (tempom < 0)
	{
    	tempom = 60 + (fimn - iniciom);
    	tempoh--;
 	}
    if (inicioh == fimh && iniciom == fimn)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        
    }else{
    	printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", tempoh, tempom);
	} 

    return 0;

}