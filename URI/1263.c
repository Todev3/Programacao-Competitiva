#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define Max 700

void Arra(char * B){
	int i=0;
	while(1){
		if(B[i] == '\n' || B[i] == '\r'){
			B[i] = '\0';
			break;
		}
		i++;
	}
}

int main(){
	char A[Max], R1;
	int Cont, Soma, S;

	while(fgets(A, Max, stdin) != NULL){

		Arra(A);
		
		Cont = 0;
		Soma = 0;
		S = 0;
		
		while(A[Cont] != '\0'){
			
			if(Cont == 0)
				R1 = toupper(A[Cont]);
			else if(A[Cont - 1] == ' '){
			
				if(toupper(A[Cont]) == R1 && S == 0){
					Soma++;
					S++;
				}
				else if(toupper(A[Cont]) != R1){
					R1 = toupper(A[Cont]);
					S = 0;
				}
			}
			
			
			
			Cont++;
		}
	
		printf("%d\n", Soma);
	
	}
	
	return 0;
}