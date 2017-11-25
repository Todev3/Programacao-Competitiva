#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

#define MAX_VERTICES 250005
#define MAX_ARESTAS 600

#define TRUE 1
#define FALSE 0

typedef struct{
	int X, Y;
}TPessoas;

typedef struct{
	double Val;
	int A, B;
}TVal;

TVal Arest[MAX_VERTICES];
int vertices[MAX_ARESTAS];

double kruskal( int qtVertices, int qtArestas){

	int comp(const void * p1, const void * p2){
		TVal *i = (TVal *)p1, *j = (TVal *)p2;
			
		if( i->Val > j->Val )
			return 1;
		else
			if( i->Val < j->Val )
				return -1;
			else
				return 0;
	}
		
	int i, j, grupo1, grupo2;
	double custoTotal;
	
	qsort(Arest, qtArestas, sizeof(TVal), comp);
	
	custoTotal = 0;
	
	for(i = 0; i < qtVertices; i++)
		vertices[i] = i + 1;
	
	for(i = 0; i <qtArestas; i++){
		if( vertices[ Arest[i].A ] != vertices[ Arest[i].B ] ){
			custoTotal += Arest[i].Val;
			
			if( vertices[ Arest[i].A ] < vertices[ Arest[i].B ]){
				grupo1 = vertices[ Arest[i].A];
				grupo2 = vertices[ Arest[i].B ];
			}
			else{
				grupo1 = vertices[ Arest[i].B ];
				grupo2 = vertices[ Arest[i].A ];
			}
			
			for(j = 0; j < qtVertices; j++)
				if(vertices[j] == grupo2)
					vertices[j] = grupo1;
			
		}
	}
	
	return custoTotal;

}

int main(void){
	int Vez, ContVez, Lin, Col, Pesso, Cont;
	TPessoas Pe[MAX_ARESTAS];
	double Resp;
	
	scanf("%d", &Vez);
	
	for(ContVez=0; ContVez < Vez; ContVez++){
		
		scanf("%d", &Pesso);
		
		for(Cont=0; Cont < Pesso; Cont++)
			scanf("%d %d", &Pe[Cont].X, &Pe[Cont].Y);
		
		Cont = 0;
		
		for(Lin=0; Lin < Pesso; Lin++)
			for(Col=Lin; Col < Pesso; Col++)
				if(Col != Lin){
					Arest[Cont].Val = sqrt( ( pow( Pe[Lin].X - Pe[Col].X, 2 ) + pow( Pe[Lin].Y - Pe[Col].Y, 2 ) ) );
					Arest[Cont].A = Lin;
					Arest[Cont].B = Col;
					Cont++;
				}
		
		Resp = kruskal(Pesso, Cont);
		
		
		printf("%.2lf\n", Resp/100);
		
	}
	
	return 0;
}