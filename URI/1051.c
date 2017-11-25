#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	float Dim, R=0;
	scanf("%f", &Dim);
	if(Dim <= 3000 && Dim > 2000){R += ((Dim - 2000) * 0.08);}
	if(Dim <= 4500 && Dim > 3000){
		R += 1000 * 0.08; 
		R += ((Dim - 3000) * 0.18);
		}
	if(Dim > 4500){
		R += 1000 * 0.08; 
		R += 1500 * 0.18;
		R += ((Dim - 4500) * 0.28);
		}
	if(Dim <= 2000){printf("Isento\n");}
	else printf("R$ %.2f\n", R);
return(0);
}