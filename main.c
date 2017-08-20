#include <stdio.h>
#include <math.h>
void func(float a, float b, float c, float *x1, float *x2);

int main()
{
	float a, b, c, x1, x2;
	printf("Input a=");
	scanf("%f", &a);
	printf("Input b=");
	scanf("%f", &b);
	printf("Input c=");
	scanf("%f", &c);
	func(a, b, c, &x1, &x2);
	if ((b*b-4*a*c)>0)
		printf("%f\n%f\n", x1, x2);
	if ((b*b-4*a*c)==0)
		printf("%f\n", x1);
	return 0;	
}

void func(float a, float b, float c, float *x1, float *x2)
{
	*x1=(-b+sqrt(b*b-4*a*c))/2*a;
	*x2=(-b-sqrt(b*b-4*a*c))/2*a;
	if((b*b-4*a*c)==0)
	{
		printf("kvadrat\n");
	}
	if((b*b-4*a*c)<0)
	{
		printf("netkorney\n");
	}


}
