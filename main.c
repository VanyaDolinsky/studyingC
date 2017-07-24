#include <stdio.h>
int main()
{
	int a;
	printf("Input a=");
	scanf("%d", &a);
	if(a%2>0 && a%3>0 && a>0)
		printf("all right\n");
	return 0;	
}
