#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(){
	int Hue;
	
	while( scanf("%d", &Hue) != EOF){
		if( Hue == 0)
			printf("vai ter copa!\n");
		if( Hue > 0)
			printf("vai ter duas!\n");
	}
return(0);
}