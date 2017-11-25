#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int Vf, Dinh, a, b, c, d, e, f, g;
	scanf("%d", &Vf);
	a = Vf / 100;
	Dinh = Vf % 100;
	b = Dinh / 50;
	Dinh = Dinh % 50;
	c = Dinh / 20;
	Dinh = Dinh % 20;
	d = Dinh / 10;
	Dinh = Dinh % 10;
	e = Dinh / 5;
	Dinh = Dinh % 5;
	f = Dinh / 2;
	Dinh = Dinh % 2;
	g = Dinh / 1;
	printf("%d\n%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", Vf, a, b, c, d, e, f, g);
return(0);
}