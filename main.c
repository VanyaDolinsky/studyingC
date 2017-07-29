#include <stdio.h>
int main()
{
	int n, i, f;
	printf("Input n=");
	scanf("%d", &n);
	for(i=1; i<=n; i++)
	{
		for (f=1; f<=i; f++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
	return 0;	
}
