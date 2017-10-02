#include <stdio.h>
int main()
{
	int a, res=0;
	printf("Input a=");
	scanf("%d", &a);
	
	while (a!=0)
	{
		res+=a;
		printf("Input a=");
		scanf("%d", &a);
	}
	printf("Result res=%d\n", res);
	return 0;	
}
