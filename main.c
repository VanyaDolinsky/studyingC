#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Input a=");
	scanf("%d",&a);
	printf("Input b=");
	scanf("%d", &b);
	if (a%b==0)
	{
		c=a/b;
		printf("Result c=%d\n", c);
	}
	else
	{
		c=a+b;
		printf("Result c=%d\n", c);
	}
	return 0;	
}
