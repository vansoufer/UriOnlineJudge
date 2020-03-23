#include <stdio.h>
main() {
	
	int pos, i;
	float n;
	pos = 0;
	
	for(i = 0; i < 6; i ++){
		
		scanf("%f", &n);
		if(n > 0){
			pos++;
		}	
	}
	
	printf("%d valores positivos\n", pos);

}