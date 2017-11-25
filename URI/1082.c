#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES
#define MAX_ARESTAS 30

#define TRUE 1
#define FALSE 0

char Arestas[MAX_ARESTAS], Verti[MAX_ARESTAS][MAX_ARESTAS], Aju[MAX_ARESTAS];

void bfs(int Noh){
	int Fila[MAX_ARESTAS], Ini=0, Fim=0, Cont, Axu;
	
	Fila[Fim++] = Noh;
	Arestas[Noh] = TRUE;
	
	while(Fim != Ini){
		Axu = Fila[Ini++];
		Aju[Axu] = TRUE;
		for(Cont=1; Cont <= Verti[Axu][0]; Cont++)
			if( Arestas[ Verti[Axu][Cont] ] != TRUE ){
				Arestas[ Verti[Axu][Cont] ] = TRUE;
				Fila[Fim++] = Verti[Axu][Cont];
			}
		
		
	}
	
}

int NMarc(int A){
	int Cont;
	
	for(Cont=0; Cont < A; Cont++){
		if( Arestas[Cont] == FALSE )
			return Cont;
	}
	
	return -1;
	
}

int main(void){
	int Lin, Vez, ContVez, Conc, Ver, Ares, Cont, Hue, Acha;
	char X1, X2;
	
	
	scanf("%d", &Vez);
	
	for(ContVez=0; ContVez < Vez; ContVez++){
		
		scanf("%d %d", &Ver, &Ares);
		
		for(Lin=0; Lin < Ver; Lin++)
			Verti[Lin][0] = 0;
		
		for(Lin=0; Lin < Ares; Lin++){
			scanf(" %c %c", &X1, &X2);
			
			Verti[X1-'a'][ ++Verti[X1-'a'][0] ] = X2 - 'a';
			Verti[X2-'a'][ ++Verti[X2-'a'][0] ] = X1 - 'a';
		}
		
		for(Lin=0; Lin < Ver; Lin++)
			Arestas[Lin] = FALSE;
		
		Acha=0;
		
		printf("Case #%d:\n", ContVez+1);
		
		while( ( Lin = NMarc(Ver) ) >= 0 ){
			
			for(Hue=0; Hue < Ver; Hue++)
				Aju[Hue] = FALSE;
			
			bfs(Lin);
			
			for(Cont=0; Cont < Ver; Cont++)
				if(Aju[Cont] == TRUE)
					printf("%c,", Cont+'a');
			
			Acha++;
			
			printf("\n");
			
		}
		
		printf("%d connected components\n\n", Acha);
	
	}
	
	
	return 0;
}