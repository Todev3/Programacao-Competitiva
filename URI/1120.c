#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(){
	char D[3], N[104];
	int i=0, T=0;
	
	scanf("%s %s", D, N);
	while(D[0] != '0' || N[0] != '0'){
		
		while(1){
			if(N[i] == '\0'){
			
				if(T == 0){
					N[T] = '0';
					T++;
					}
					
				N[T] = '\0';
				break;
				}
				
			else if(D[0] != N[i]){
			
				if(T == 0 && N[i] == '0')
					T=0;
					
				else{
				N[T] = N[i];
				T++;
					}
				}
				
				i++;
				
			}
	
	if(N[0] == '0')
		printf("0\n");
	else printf("%s\n", N);
	
	i=0;
	T=0;
	
	scanf("%s %s", D, N);
	}
	return(0);
}