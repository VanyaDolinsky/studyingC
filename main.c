#include <stdio.h>
#include <math.h>
int fact(float *, int *);
int main(void) {
	float a;
	int n, k;
	printf("Input a:");
	scanf("%f", &a);
	printf("Input n:");
	scanf("%d", &n);
	k=fact(a, &n);
	printf("Factorial k=%d\n", k);
return 0;
}
int fact(int i,int *n) {
	if (n==0)
		return i;
	else
		n--;
		return fact((float)sqrt(*i+fact(*i)),&n);
}
