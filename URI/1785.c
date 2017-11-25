#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_TAM 55

#define TRUE 1
#define FALSE 0

int Me(char * X){
	int Cont=0, Axu=0;
	char Aju;
	
	while(Axu < 3){
		
		Cont = 0;
		
		while(Cont <= 2){
			if( X[Cont] > X[Cont + 1] ){
				Aju = X[Cont];
				X[Cont] = X[Cont + 1];
				X[Cont + 1] = Aju;
			}
			Cont++;
		}
		
		Axu++;
		
	}
	
	return atoi(X);
	
}

int Ma(char * X){
	int Cont=0, Axu=0;
	char Aju;
	
	while(Axu < 3){
		
		Cont = 0;
		
		while(Cont <= 2){
			if( X[Cont] < X[Cont + 1] ){
				Aju = X[Cont];
				X[Cont] = X[Cont + 1];
				X[Cont + 1] = Aju;
			}
			Cont++;
		}
		
		Axu++;
		
	}
	
	return atoi(X);
	
}

int checar(char * X){
	char A = X[0];
	while(*X != '\0'){
		if(*X != A){
			return 1;
		}
		X++;
	}

	return 0;
	
}

void Conver(int X, char * A){
	int Cont=3;
	
	do{
		A[Cont--] = X%10 + '0';
		X = X/10;
	}while( X/10 != 0 || X%10 != 0);
	
	while(Cont >= 0)
		A[Cont--] = '0';
	
	A[4] = '\0';
}

int Kra(int X){
	int Cont = 0, Maior, Menor;
	char Num[6];
	
	while(X != 6174){
		
		Conver(X, Num);
		
		if( checar(Num) == 0 )
			return -1;
		
		Maior = Ma(Num);
		Menor = Me(Num);
		
		X = Maior - Menor;
		Cont++;
	}
	
	return Cont;
	
}

int main(void){
	int Testes, Cont, Resp;

	scanf("%d", &Testes);
	
	for(Cont=0; Cont < Testes; Cont++){
		
		scanf("%d", &Resp);
		
		printf("Caso #%d: %d\n", Cont+1, Kra(Resp));
		
	}
	
	return 0;
}