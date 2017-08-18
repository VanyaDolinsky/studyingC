#include <stdio.h>
float Square(float a, float b);
float Perimetr(float a, float b);
int main()
{
	float a, b, S, P;
	printf("Input a=");
	scanf("%f", &a);
	printf("Input b=");
	scanf("%f", &b);
	S=Square(a, b);
	P=Perimetr(a, b);
	printf("s=%f\n", S);
	printf("p=%f\n", P);
	return 0;	
}

float Square(float a, float b)
{
	float S;
	S=a*b;
	return S;
}
float Perimetr(float a, float b)
{
	float P;
	P=(a+b)*2;
	return P;
}
