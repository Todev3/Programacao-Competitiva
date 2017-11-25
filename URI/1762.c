#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

typedef struct{
	char Nome[1000];
	double Prec;
}Pre;

typedef struct{
	char Nome[1000];
	int Qtd;
}Po;

void limpa(void){
	while(getchar() != '\n');
}

void Arruma(char * A){
	int cont=0;
	while(1){
		if(A[cont] == '\n' || A[cont] == '\r' || A[cont] == '\0'){
			A[cont] = '\0';
			break;
		}
		cont++;
	}
}

int main(){
	int cont, P, Casos, C;
	Pre A[2000];
	double Carga, Total;
	Po Ent;
	
	scanf("%d", &Casos);
	
	for(C=0; C < Casos; C++){
		
		scanf("%d", &P);
		
		for(cont = 0; cont < P; cont++){
			limpa();
			fgets(A[cont].Nome, 1000, stdin);
			scanf(" %lf", &A[cont].Prec);
			Arruma(A[cont].Nome);
		}
	
		scanf(" %lf", &Carga);
		
		Total = 0;
		
		while(1){
			
			limpa();
			fgets(Ent.Nome, 1000, stdin);
			scanf(" %d", &Ent.Qtd);
			
			Arruma(Ent.Nome);
			
			if(strcmp("-", Ent.Nome) == 0 && Ent.Qtd == 0)
				break;
			
			for(cont = 0; cont < P && strcmp(Ent.Nome, A[cont].Nome) != 0; cont++);
			
			if(cont == P)
				printf("NAO LISTADO: %s\n", Ent.Nome);
			else
				Total += A[cont].Prec * Ent.Qtd;
		
		}
		
		Carga = ceil(Total / Carga);
		
		
		
		printf("Peso total: %.2lf kg\n", Total);
		printf("Numero de trenos: %.0lf\n", Carga);
		
		printf("\n");
	
	}
	
	
	return 0;
}