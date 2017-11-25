#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
float N1, N2, N3, N4, R;
	scanf("%f %f %f %f", &N1, &N2, &N3, &N4);
	R = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10;
	printf("Media: %.1f\n", R);
	if(R >= 5 && R <= 6.9){
		printf("Aluno em exame.\n");
		scanf("%f", &N1);
		printf("Nota do exame: %.1f\n", N1);
		R = (R + N1) / 2;
		N1 = 0;
	}
	if(R >= 5){printf("Aluno aprovado.\n");}
	if(R < 5){printf("Aluno reprovado.\n");}
	if(N1 == 0){printf("Media final: %.1f\n", R);}	
return(0);
}