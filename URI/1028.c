#include <math.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int Resolve(int A, int B){
	int r;
	if(A<0) A = -A;
	if(B<0) B = -B;
	
	if(A % B == 0)
		return B;
	else
		return Resolve(B, A%B);

}


int main (){
	int NumEn, Num1, Num2, Cont;
	
	scanf("%d", &NumEn);
	
	for(Cont=0; Cont < NumEn; Cont++){
		
		scanf("%d %d", &Num1, &Num2);
		printf("%d\n",Resolve(Num1, Num2));
		
	}

	return 0;
}