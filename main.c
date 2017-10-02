#include <stdio.h>
#include <math.h>
float fact(int i, int *);
int main(void) {
	float res;
	int a, n;
	printf("Input a:");
	scanf("%d", &a);
	printf("Input n:");
	scanf("%d", &n);
	res=fact(a, &n);
	printf("Factorial res=%f\n", res);
return 0;
}
float fact(int a, int *k) {
	int n;
	n=*k;
	if (n==1)
		return sqrt(a);
	else
	{
		n--;
		return sqrt(a+fact(a, &n));
	}
}
