#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define Max 110

void limpar(void){
	while(getchar() != '\n');
	}

void Arruma(char * T){
	int Cont=0;
	
	while(1){
		
		if(T[Cont] == '\n' || T[Cont] == '\r' || T[Cont] == '\0'){
			T[Cont] = '\0';
			break;
		}
		Cont++;
	}

}
	
int main(void){
	char A[Max], B[Max], C[Max];
	int Cont, Vez, Co, R1, R2, R3, Bb, Cc;
	
	scanf("%d", &Vez);
	limpar();
	
	for(Co=0; Co < Vez; Co++){
	
		fgets(A, Max, stdin);
		fgets(B, Max, stdin);
		fgets(C, Max, stdin);
		
		Arruma(A);
		Arruma(B);
		Arruma(C);
	
		R1 = R2 = Cont = 0;
		Bb = Cc =110;
		
		while(A[Cont] != '\0'){
		
			if(A[Cont] == B[Cont]){
				R1++;
				if(Bb == 110)
					Bb = Cont;
			}
			if(A[Cont] == C[Cont]){
				R2++;
				if(Cc == 110)
					Cc = Cont;
			}
			
			if(Cc == Bb){
				Cc=110;
				Bb=110;
			}
			
			Cont++;
			
		}
	
			
		printf("Instancia %d\n", Co+1);
	
		if(R1 == R2){
			if(Bb < Cc)
				printf("time 1\n");
			else if(Bb > Cc)
				printf("time 2\n");
			else
				printf("empate\n");
			
		}
		else if(R1 > R2)
			printf("time 1\n");
		else
			printf("time 2\n");
		
		printf("\n");
		
	}
	
	return 0;
}