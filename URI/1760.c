#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main( )
{
	int lado;
	double resp ; 
	
	while(scanf("%d", &lado)!= EOF)
	{
		resp = ((lado*lado) * 1.732050807568877) / 4.0;
		resp = (resp * 8) / 5.0;	
		printf("%.2lf\n", resp);
	}
		
}