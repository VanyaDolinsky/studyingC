#include <stdio.h>
int main()
{
	int a, b, c;
	printf("Input a=");
	scanf("%d", &a);
	printf("Input b=");
	scanf("%d", &b);
	c=0;
	while (a>0 && b>0)
	{
		c+=a+b;
	}
	printf("Result c=%d\n", c);
	return 0;	
}
