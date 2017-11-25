#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float Sal, NovSal, Reaj, Porc;
	char C='%';
	scanf("%f", &Sal);
	if(Sal <= 400){
		NovSal = Sal * 1.15;
		Reaj = Sal * 0.15;
		Porc = 15;
	}
	else if(Sal <= 800){
		NovSal = Sal * 1.12;
		Reaj = Sal * 0.12;
		Porc = 12;
	}
	else if(Sal <= 1200){
		NovSal = Sal * 1.10;
		Reaj = Sal * 0.10;
		Porc = 10;
	}
	else if(Sal <= 2000){
		NovSal = Sal * 1.07;
		Reaj = Sal * 0.07;
		Porc = 7;
	}
	else{ 
		NovSal = Sal * 1.04;
		Reaj = Sal * 0.04;
		Porc = 4;
	}
	printf("Novo salario: %.2f\n", NovSal);
	printf("Reajuste ganho: %.2f\n", Reaj);
	printf("Em percentual: %.0f %c\n", Porc, C);
return(0);
}