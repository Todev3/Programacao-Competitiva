#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

typedef struct{
	char Nome[200];
	char Freq[200];
	int Aulas;
}Aluno;

int main(void){
	Aluno A[200];
	int Vez, C, Ent, Cont, Lin, hue;
	double Dias;
	
	scanf("%d", &Vez);
	
	for(C=0; C < Vez; C++){
	
		scanf("%d", &Ent);
		
		for(Cont=0; Cont < Ent; Cont++)
			scanf("%s", A[Cont].Nome);
	
		for(Cont=0; Cont < Ent; Cont++)
			scanf("%s", A[Cont].Freq);
		
		hue = 0;
		
		for(Cont=0; Cont < Ent; Cont++){
			A[Cont].Aulas = 0;
			Lin = 0;
			Dias = strlen(A[Cont].Freq);
			while(A[Cont].Freq[Lin] != '\0'){
			
				if(A[Cont].Freq[Lin] == 'P')
					A[Cont].Aulas++;
				if(A[Cont].Freq[Lin] == 'M')
					Dias--;
					
				Lin++;
			}
			
			if( ((A[Cont].Aulas * 100) / Dias) < 75){
				if(hue != 0){
					printf(" ");
					hue++;
				}
				printf("%s", A[Cont].Nome);
				hue++;
			}
		}
		
		printf("\n");
	
	}

	return 0;
}