#include <stdio.h>
int main()
{
	int a, b, c; 
	printf ("Input a=");
	scanf("%d", &a);
	printf ("Input b=");
	scanf("%d", &b);
	printf ("Input c=");
	scanf("%d", &c);
	if(a>b && a>c)
		printf ("a\n");
	if(b>a && b>c)
		printf ("b\n");
	if(c>a && c>b)
		printf ("c\n");
	if (a==b && a>c && b>c)
		printf("a,b\n");
	if(a==c && a>b && c>b) 
		printf("a,c\n");
	if(b==c && b>a && c>a)
		printf("b,c\n");
	return 0;	
}
