#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

typedef struct{
	
	int D;
	int H;
	int M;
	int S;

	}Tempo;

int main(){
	Tempo Co, Fi;
	int A, B;
	char Pa[50];
	
		scanf("%s %d %d : %d : %d", Pa, &Co.D, &Co.H, &Co.M, &Co.S);
		scanf("%s %d %d : %d : %d", Pa, &Fi.D, &Fi.H, &Fi.M, &Fi.S);
		
		A = Co.S + (Co.M * 60) + (Co.H * 60 * 60) + (Co.D * ( ( 60 * 60 ) * 24) );
		B = Fi.S + (Fi.M * 60) + (Fi.H * 60 * 60) + (Fi.D * ( ( 60 * 60 ) * 24) );
		
		A = B - A;
		
		Co.D = A / ( ( 60 * 60 ) * 24);
		if(Co.D > 0)
			A -=  Co.D * ( ( 60 * 60 ) * 24) ;
		
		Co.H = A / (60 * 60);
		if(Co.H > 0)
			A -= Co.H * (60 * 60);
		
		Co.M = A / (60);
		if(Co.M > 0)
			A -= Co.M *(60);
		
		Co.S = A;
		
		printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", Co.D, Co.H, Co.M, Co.S);
		
	return 0;
}