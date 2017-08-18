#include <stdio.h>
double InchToM(double x);
int main()
{
	float a, m;
	printf("Input inch=");
	scanf("%f", &a);
	m=InchToM(a);
	printf("%f\n", m);
	return 0;	
}

double InchToM(double x)
{
	double y;
	y=x*0.0254;
	return y;
}
