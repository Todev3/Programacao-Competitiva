#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

void Arru(char * A){
	int Cont=0;;
	
	while(A[Cont] != '\r' && A[Cont] != '\0' && A[Cont] != '\n')
		Cont++;
	
	A[Cont] = '\0';
	
	
}

void Limpa(){
	while(getchar() != '\n');
}

int main(void){
	char Entrada[105][50];
	int Vezes, ContVezes, Ent, ContEnt, Resp, Aux, X, Dec;
	
	scanf("%d", &Vezes);
	
	for(ContVezes=0; ContVezes < Vezes; ContVezes++){
		
		Resp = 0;
		
		scanf("%d", &Ent);
		
		Limpa();
		
		for(ContEnt=0; ContEnt < Ent; ContEnt++){
			fgets(Entrada[ContEnt], 50, stdin);
			Arru(Entrada[ContEnt]);
		}
		
		for(ContEnt=0; ContEnt < Ent; ContEnt++){	
			
			if(strcmp("LEFT", Entrada[ContEnt]) == 0){
				Resp--;		
			}		
			else if(strcmp("RIGHT", Entrada[ContEnt]) == 0){
				Resp++;
			}
			else{
				
				X = 8;
				Aux = 0;
				Dec = 1;
				while(Entrada[ContEnt][X] != '\0'){
					Aux *= Dec; 
					Dec *= 10;
					Aux += Entrada[ContEnt][X] - '0';
					X++;
				}
				
				if(strcmp("LEFT", Entrada[Aux-1]) == 0){
					Resp--;
					strcpy(Entrada[ContEnt], Entrada[Aux-1]);
				}		
				else if(strcmp("RIGHT", Entrada[Aux-1]) == 0){
					Resp++;
					strcpy(Entrada[ContEnt], Entrada[Aux-1]);
				}
				
			}
			
		}
		
		printf("%d\n", Resp);
		
	}



	return 0;
}