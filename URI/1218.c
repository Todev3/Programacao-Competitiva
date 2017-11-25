#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

void Limpa()
{  
	while(getchar()!='\n');
	return;
}

int main(){
	int i=0, Caso=0, M=0, F=0, Pares=0;
	char Sapatos[110000], Num[3];
	
	while(scanf("%s", Num) != EOF){
		
		Caso++;

		Limpa();
		fgets(Sapatos, 110000, stdin);
		
		
		for(i=0; i <= 110000; i++){

			if(Sapatos[i] == '\n'){
				Sapatos[i] = '\0';
				break;
			}
		}
		
		
		for(i=0; i<=110000; i+=5){
			
			if(Sapatos[i] == Num[0] && Sapatos[i+1] == Num[1]){
				
				Pares++;
				
				if(Sapatos[i+3] == 'F')
					F++;
				else 
					M++;
			}
			
			if(Sapatos[i+5] == '\0'){
				break;}
			
		}
		
		if(Caso > 1)
			printf("\n");
		printf("Caso %d:\nPares Iguais: %d\nF: %d\nM: %d\n", Caso, Pares, F, M);
		Pares=0;
		F=0;
		M=0;

	}
		
	return(0);

}