#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	double M[12][12], R=0;
	int Lin, Col, Ent;
	char A;
	
	scanf("%d %c", &Ent, &A);
	
	for(Lin=0; Lin < 12; Lin++)
		for(Col=0; Col < 12; Col++)
			scanf("%lf", &M[Lin][Col]);
			
	for(Lin=0; Lin < 12; Lin++)
		R += M[Ent][Lin];
		
	if(A == 'M')
		R /= 12;
		
	printf("%.1lf\n", R);
	
	return 0;
}