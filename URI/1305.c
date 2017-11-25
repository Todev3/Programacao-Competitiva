#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>


int main(){
	char Num[12], Cutoff[12];
	double Comp;
	while( scanf("%s %s", Num, Cutoff) != EOF){
	
		Comp = atof(Num) - atof(Cutoff);
		if(Comp < atoi(Num))
			printf("%d\n", atoi(Num));
		else
		 printf("%d\n", atoi(Num)+1);
	}
	
	return(0);
}