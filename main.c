#include <stdio.h>
int main()
{
	int n, k, s, h;
	h=1;
	printf("Input n=");
	scanf("%d", &n);
	printf("Input k=");
	scanf("%d", &k);
	if (k==0)
	{
		printf("1\n");
	}
	else
	{
		for(s=1; s<=k; s++)
		{
			h=h*n;
		}
		printf("Result h=%d\n", h);
	}		
	return 0;	
}
