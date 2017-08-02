#include <stdio.h>
int main()
{
	int n, sum=0, c, paf, power=1;
	printf("Input n=");
	scanf("%d", &n);
	for (c=1; c<=n; c++)
	{
		power = 1;
		for(paf=1; paf<=c; paf++)
		{
			power*=c;
		}
		sum+=power;
		printf("power = %d\n", power);
	}
	
	printf("%d\n", sum);
	return 0;	
}

