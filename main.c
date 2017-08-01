#include <stdio.h>
int main()
{
	int n, i, sum=0, c, paf, power=1;
	printf("Input n=");
	scanf("%d", &n);
		for (c=1; c<=n; c++)
		{
			power = 1;
			for(paf=1; paf<=n; paf++)
			{
				power*=n;
				sum+=power;
			}

			printf("%d\n", sum);
		}
	return 0;	
}
