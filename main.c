#include <stdio.h>
int main()
{
	int n, i, sum, c, k, h;
	printf("Input n=");
	scanf("%d", &n);
	for (i=1; i<=n; i++);
	{
		for (c=1; c<=n; c++)
		{
			k=c*i;
			h=i;
			h*=k;
			sum+=h;
			printf("%d\n", sum);
			}
		}
	}
	return 0;	
}
