#include <stdio.h>
int main()
{
	int a, b, c, d;
	printf("Input a=");
	scanf("%d",&a);
	printf("Input b=");
	scanf("%d", &b);
	c=a/b;
	d=a+b;
		if (a%b==0)
		 printf("Result c=%d\n", c);
			else
			printf("Result d=%d\n", d);

	return 0;	
}
