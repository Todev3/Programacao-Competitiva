#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char Palavra[55];
	int Cont, i=0, Ord=0;
	
	while(fgets(Palavra, 55, stdin) != NULL){
	
		while(Palavra[i] != '\0' && Palavra[i] != '\n'){
		
			if(Palavra[i] != ' '){

				if(Ord % 2 == 0)
					Palavra[i] = toupper(Palavra[i]);
				else
					Palavra[i] = tolower(Palavra[i]);
				
				Ord++;
				
			}
			
			i++;
			
		}
		
		Palavra[i] = '\0';
		
		printf("%s\n", Palavra);
		
		i = 0;
		Ord = 0;
	}
	
	return 0;
}