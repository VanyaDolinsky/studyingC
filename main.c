#include <stdio.h>
#define BASE 10
long int BASEto3(long int a);
int main(void) {
	long int x, y;
	printf("a=");
	scanf("%ld", &x);
	y = BASEto3(x);
	printf("x=%ld\n", y);
	return 0;
}
long int BASEto3(long int a) {
	int k=1;
	long int a3=0;
	while (a) {
		a3 += k*(a%3);
		k *= BASE;
		a/=3;
	}
return a3;
}
