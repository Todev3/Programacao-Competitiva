#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char A[10];
	int Vezes, Cont, B=0;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
	
		scanf("%s", A);
		
		if(strlen(A) == 5)
			printf("3\n");
		else{
			if(strchr(A, 'o') != NULL)
				B++;
			if(strchr(A, 'n') != NULL)
				B++;
			if(strchr(A, 'e') != NULL)
				B++;
			if(B > 1)
				printf("1\n");
			else
				printf("2\n");
		
		}
		
		B = 0;
		
	}
	
	return 0;
}