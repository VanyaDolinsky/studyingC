#include <stdio.h>
int main()
{
	int a, c, d, i;
	printf ("Input a=");
	scanf("%4d", &a);
	c=0;
	for (i=0; i<4;i++)
	{
		d=a%10;
		c=c+d;
		a=a/10;
	}
	printf("Result c=%4d\n", c);
	return 0;	
}
