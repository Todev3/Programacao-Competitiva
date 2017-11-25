#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 1005
#define MAX_ARESTAS 1005

#define TRUE 1
#define FALSE 0

char Partici[MAX_ARESTAS];
int Amizades[MAX_ARESTAS][MAX_ARESTAS];

int bfs(int Noh, int Max){
	int Amigs=0, Ini=0, Fim=0, Axu, Cont;

	for(Cont=0; Cont < Max; Cont++){
		if( Amizades[ Noh ][ Cont ] == TRUE && Partici[ Cont ] == FALSE){
			Partici[ Cont ] = TRUE;
			Amigs++;
		}
	}
	
	return Amigs;
	
}

int main(void){
	int Lin, Pessoas, Relac, NumMinAmigs, Cont, X, Y, Axu, Col, Hue;
	char Flag;
	
	while( scanf("%d %d %d", &Pessoas, &Relac, &NumMinAmigs) != EOF ){
		
		for(Cont=0; Cont < Pessoas; Cont++)
			for(Col=0; Col < Pessoas; Col++)
				Amizades[Cont][Col] = FALSE ;
		
		for(Cont=0;  Cont < Relac; Cont++){
			
			scanf("%d %d", &X, &Y);
			
			Amizades[X - 1][ Y - 1 ] = TRUE;
			Amizades[Y - 1][ X - 1 ] = TRUE;
		
		}
		
		Hue = FALSE; /* sem ideia para nome msm '-' */
		while( Hue == FALSE){
			 
			Hue = TRUE;
			 
			for(Cont=0; Cont < Pessoas; Cont++){
			
				for(Lin=0; Lin < Pessoas; Lin++)
					Partici[Lin] = FALSE;
			
				Axu = bfs(Cont, Pessoas);
				
				if(Axu > 0 && Axu < NumMinAmigs){
					Hue = FALSE;
					for(Lin=0; Lin < Pessoas; Lin++){
						Amizades[ Lin ][ Cont ] = FALSE;
						Amizades[ Cont ][ Lin ] = FALSE;
					}
				}
				
			}
		}
		
		
		Flag = FALSE;
		
		for(Cont=0; Cont < Pessoas; Cont++){
			
			for(Lin=0; Lin < Pessoas; Lin++)
				Partici[Lin] = FALSE;
			
			Axu = bfs(Cont, Pessoas);
			
			if(Axu >= NumMinAmigs){
				if(Flag == TRUE)
					printf(" ");
				Flag = TRUE;
				printf("%d", Cont+1);
			}
		}
		
		if(Flag == FALSE)
			printf("0");
	
		printf("\n");
		
	}
	
	return 0;
}