#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define MAX_TAM 3000

int main(void){
char EntreLab[MAX_TAM], Carac, Fod[2];
	int Cont, Come, Axu, Flag, FlagB, Soma;
	
	Fod[1] = '\0';
	
	while( fgets(EntreLab, MAX_TAM, stdin) != NULL ){
			
		Axu = 0;
		FlagB = 0;
		Soma = 0;
		
		if(EntreLab[0] != ' '){
			
			while(1){
				
				FlagB = 0;
				Flag = 1;
				Soma = 0;
				
				while(EntreLab[Axu] != '\n' && EntreLab[Axu] != '\0' && EntreLab[Axu] != '\r'){
					Flag = 0;
					
					if(EntreLab[Axu] == '!'){
						FlagB = 1;
						Axu++;
						break;
					}
					else if(EntreLab[Axu] >= '0' && EntreLab[Axu] <= '9'){
						Fod[0] = EntreLab[Axu];
						Soma += atoi(Fod);
					}
					else if(EntreLab[Axu] >= 'A' && EntreLab[Axu] <= 'Z' || EntreLab[Axu] == '*'){
						Carac = EntreLab[Axu];
						Axu++;
						break;
					}
					else{
						Carac = ' ';
						Axu++;
						break;
					}
				
					Axu++;			
				}
				
				if(Flag == 1)
					break;
				
				if(FlagB == 1)
					printf("\n");
				else{	
					for(Cont=0; Cont < Soma; Cont++)
						printf("%c", Carac);
				}
			}
		}
		
		printf("\n");
			
	}

	return 0;
}