#include <stdio.h>
int main()
{
	int a; 
	printf ("Input a=");
	scanf("%d", &a);
	if((a<=-10 || (a>=25 && a<=80)) && (a%2==0))
		printf("all right\n");
	return 0;	
}
