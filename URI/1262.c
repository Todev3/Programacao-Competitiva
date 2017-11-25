#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char Rastro[55];
	int NumPro, Total=0, i, Acumula[30], ContAcu=0, ContW=0, A;
	
	while( scanf("%s %d", Rastro, &NumPro) != EOF){
		
		
		for(i=0; i <= 25; i++) //zera todos os campos da matriz
			Acumula[i] = 0;
		
		for(i=0; i <= 55; i++){ //manipula a string, conta quantos R seguido tem 
			
			if(Rastro[i] == 'R'){
				Acumula[ContAcu]++;
				if(Rastro[i+1] == 'W')
					ContAcu++;
			}
			
			else
				ContW++;
				
			if( Rastro[i+1] == '\0') //Quebra o For quando achar null
				break;
		
		}
		
		for(i=0; i <= 25; i++){
		
			if(Acumula[i] == 0) //quebra o For 
				break;
			
			if( (Acumula[i] % NumPro) > 0)
				Total = Total + ( Acumula[i]/NumPro ) + 1;
		
			else
				Total = Total + ( Acumula[i]/NumPro );
			
			
		}
	
		printf("%d\n", Total+ContW);
		Total = 0;
		ContW = 0; //zera as variaveis 
		ContAcu = 0;
	}
	
	return(0);
}