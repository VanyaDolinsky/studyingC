#include <stdio.h>
int main()
{
	float a, b, c, d, e, f, g, h, m;
	printf ("Input a=");
	scanf("%f", &a);
	printf ("Input b=");
	scanf("%f", &b);
	printf ("Input c=");
	scanf("%f", &c);
	printf ("Input d=");
	scanf("%f", &d);
	e=1;
	f=-(a+b+c+d);
	g=a*b+a*c+a*d+b*c+b*d+c*d;
	h=-(a*b*c+a*b*d+a*c*d+b*c*d);
	m=a*b*c*d;
	printf("Result\n e= %f\n f=%f\n g= %f\n h=%f\n m= %f\n", e, f, g, h, m);
	return 0;	
}
