#include <stdio.h>
#include <math.h>
int main()
{
	int i=0;
	double y[41], x;
	for(x=-6; x<=6; x+=0.3)
	{
		y[i]=5*sin(2*x);
		printf("%f\n", y[i]);
		i++;
	}
	return 0;	
}
