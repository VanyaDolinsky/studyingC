#include <stdio.h>
int main()
{
	int a, b;
	printf("Input a=");
	scanf("%d",&a);
	printf("Input b=");
	scanf("%d", &b);
	if(a!=b)
		if (a>b)
		 printf("a\n");
			else
		printf("b\n");
			else
		printf("");
	return 0;	
}
