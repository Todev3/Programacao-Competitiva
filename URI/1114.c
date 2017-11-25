#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int Senha;
	do{
		scanf("%d", &Senha);
		if(Senha != 2002) { printf("Senha Invalida\n"); }
	}while(2002 != Senha);
	printf("Acesso Permitido\n");
return(0);
}