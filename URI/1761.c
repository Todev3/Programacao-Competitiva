#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main( )
{
	double angulo,distancia,alturaelfo,cateto_oposto;
	
	while(scanf("%lf %lf %lf", &angulo, &distancia, &alturaelfo) != EOF)
	{
		angulo = (angulo * 3.141592654) / 180;
		
		cateto_oposto = alturaelfo + (distancia * tan(angulo));
		
		cateto_oposto = cateto_oposto * 5;
		
		printf("%.2lf\n", cateto_oposto);
		
		cateto_oposto = 0;
	}
	
}