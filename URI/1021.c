#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
	int Dinh, a, b, c, d, e, f, g, h, i, j, k, l;
	float Vf;
	scanf("%f", &Vf);
	Dinh = Vf * 1000;
	if(Dinh % 10 == 9){Dinh++;}
	a = Dinh / 100000;
	Dinh = Dinh % 100000;
	b = Dinh / 50000;
	Dinh = Dinh % 50000;
	c = Dinh / 20000;
	Dinh = Dinh % 20000;
	d = Dinh / 10000;
	Dinh = Dinh % 10000;
	e = Dinh / 5000;
	Dinh = Dinh % 5000;
	f = Dinh / 2000;
	Dinh = Dinh % 2000;
	g = Dinh / 1000;
	Dinh = Dinh % 1000;
	h = Dinh / 500;
	Dinh = Dinh % 500;
	i = Dinh / 250;
	Dinh = Dinh % 250;
	j = Dinh / 100;
	Dinh = Dinh % 100;
	k = Dinh / 50;
	Dinh = Dinh % 50;
	l = Dinh / 10;
	printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", a, b, c, d, e, f, g, h, i, j, k, l);
return(0);
}