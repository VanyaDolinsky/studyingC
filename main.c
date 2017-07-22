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
	if((a-b)>0 && (a-c)>0)
		printf ("a\n");
			if((b-a)>0 && (b-c)>0)
		printf ("b\n");
			if((c-a)>0 && (c-b)>0)
		printf ("b\n");
			if (a==b && a>c && b>c)
		printf("a,b\n");
			if(a==c && a>b && c>b) 
		printf("a,c\n");
			if(b==c && b>a && c>a)
		printf("b,c\n");
	return 0;	
}
