#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char Pala1[53], Pala2[53], Resp[110];
	int Cont, Vezes, Con=0, i=0;
	
	scanf("%d", &Vezes);
	
	for(Cont=0; Cont < Vezes; Cont++){
	
		scanf("%s %s", Pala1, Pala2);
		
		if(strlen(Pala1) < strlen(Pala2)){
			while(Pala1[Con] != '\0'){
			
				Resp[i] = Pala1[Con];
				i++;
				Resp[i] = Pala2[Con];
				i++;
				Con++;
			}
		
			while(Pala2[Con] != '\0'){
				Resp[i] = Pala2[Con];
				i++;
				Con++;
			}
		}
		else{
			while(Pala2[Con] != '\0'){
			
				Resp[i] = Pala1[Con];
				i++;
				Resp[i] = Pala2[Con];
				i++;
				Con++;
			}
		
			while(Pala1[Con] != '\0'){
				Resp[i] = Pala1[Con];
				i++;
				Con++;
			}
		}
		
		Resp[i] = '\0';
		
		printf("%s\n", Resp);
		i=0;
		Con=0;
		
	}
	
	return 0;
}