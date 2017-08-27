#include <stdio.h>
#include <math.h>
float fact(float *, float *);
int main(void) {
	float n, a;
	float k;
	printf("Input a:");
	scanf("%f", &a);
	printf("Input n:");
	scanf("%f", &n);
	k=fact(&a, &n);
	printf("Factorial k=%f\n", k);
return 0;
}
float fact(float *i, float *n) {
	if (n==0)
		return 1;
	else
		n--;
		return fact(sqrt(*i+fact(*i)));
}
