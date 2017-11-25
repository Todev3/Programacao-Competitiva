#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int N, In=0, Out=0, i, Rec;
	scanf("%d", &N);
	for(i=0; i < N; i++){
		scanf("%d", &Rec);
		if(Rec >= 10 && Rec <= 20){ In++;}
		else {Out++;}
	}
	printf("%d in\n%d out\n", In, Out);
return(0);
}