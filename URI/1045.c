#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int Test, Cont, Axu, Num=3;
	double N[4];
	scanf("%lf %lf %lf", &N[0], &N[1], &N[2]);
	
	do{
		Cont = 0;
		Test = 0;
		
		while(Cont < Num - 1){
			if(N[Cont] < N[Cont + 1]){
				Axu = N[Cont];
				N[Cont] = N[Cont + 1];
				N[Cont + 1] = Axu;
				Test = 1;
			}
			
			Cont++;
			
		}
	
	}while(Test);
	
	
	if(N[0] >= N[1] + N[2])
		printf("NAO FORMA TRIANGULO\n");
	else{
		if(pow(N[0],2) == pow(N[1],2) + pow(N[2],2))
			printf("TRIANGULO RETANGULO\n");
		
		if(pow(N[0],2) > pow(N[1],2) + pow(N[2],2))
			printf("TRIANGULO OBTUSANGULO\n");
		if(pow(N[0],2) < pow(N[1],2) + pow(N[2],2))
			printf("TRIANGULO ACUTANGULO\n");
		if(N[0] == N[1] && N[1] == N[2] && N[2] == N[0])
			printf("TRIANGULO EQUILATERO\n");
		else if(N[0] == N[1] || N[1] == N[2] || N[2] == N[0])
			printf("TRIANGULO ISOSCELES\n");
	}
return(0);
}