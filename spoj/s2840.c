#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

#define TRUE	1
#define FALSE	0

#define MAX_VERTICES	200
#define MAX_ARESTAS 	10060
#define INFINITO		99999999

int iVertices[MAX_VERTICES]; 
int iArestas[MAX_ARESTAS][MAX_ARESTAS];

int Dijkstra(int iQtVert, int iOrigem, int iDestino)
{
	int iDistancias[MAX_ARESTAS];
	int iLin, iCol, iMenor, iProx;
	
	memset(iVertices, FALSE, sizeof(int) * (iQtVert+2) );
	
	for(iLin = 0; iLin < iQtVert; iLin++)
		iDistancias[iLin] = INFINITO;
	
	iDistancias[iOrigem] = 0;
	
	for(iLin = 0; iLin < iQtVert; iLin++)
	{
		iMenor = INFINITO;
		for(iCol = 0; iCol < iQtVert; iCol++)
		{
			if(iVertices[iCol] == FALSE && iDistancias[iCol] < iMenor)
			{
				iMenor = iDistancias[iCol];
				iProx = iCol;
			}
		}
		
		iVertices[iProx] = TRUE;

		for(iCol = 0; iCol < iQtVert; iCol++)
			if(iArestas[iProx][iCol] != INFINITO)
				if(iDistancias[iProx] + iArestas[iProx][iCol] < iDistancias[iCol])
					iDistancias[iCol] = iDistancias[iProx] + iArestas[iProx][iCol];
			
	}
	
	
	
	return iDistancias[iDestino]; /* Retorna a distância da origem ao destino especificado */
}

int main()
{
	int n, m, orig, dest, x, y, z, lin, col, custo;
	
	while(scanf("%d %d",&n,&m) && !(n == 0 && m == 0))
	{
		for(lin = 0; lin < n; lin++)
			for(col = 0; col < n; col++)
				iArestas[lin][col] = INFINITO;
		
		for(lin = 0; lin < m; lin++)
		{
			scanf("%d %d %d",&x,&y,&z);
			iArestas[x - 1][y - 1] = z;
		}
		
		scanf("%d %d",&orig,&dest);
		
		custo = Dijkstra(n, orig - 1, dest - 1);
		
		if(custo == INFINITO)
			printf("-1");
		else
			printf("%d",custo);
		printf("\n");
	}
	
	return 0;
}