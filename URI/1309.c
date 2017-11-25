#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#define Max 100


int main(){
	char A[Max], B[Max], Cen[10];
	int C, Cont, Lu, Axi;
	
	while(scanf("%s %s", &A, &Cen) != EOF){
	
		C = strlen(A) - 1;
		Lu = 3;
		Axi = 0;
		
		B[2] = '.';
		
		if(strlen(Cen) == 1){
			B[0] = Cen[0];
			B[1] = '0';	
		}
		else{
			B[0] = Cen[1];
			B[1] = Cen[0];	
		}
		
		for(Cont = C; Cont >= 0; Cont--){
		
			B[Lu] = A[Cont];
			Axi++;
			if(Axi == 3 && Cont != 0){
				Lu++;
				B[Lu] = ',';
				Axi = 0;
			}
			Lu++;
		}
		
		B[Lu] = '\0';
		
		C = strlen(B) - 1;
		Lu = 0;
		for(Cont = C; Cont >= 0; Cont--){
			A[Lu] = B[Cont];
			Lu++;
		}
		
		A[Lu] = '\0';
		
		printf("$%s\n", A);
		
	}

	return 0;
}