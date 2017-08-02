#include <stdio.h>
int main()
{
	int sum=0, c, paf, power=1;
	for (c=1; c<=2147483647; c++)
	{
		for(paf=1; paf<=c; paf++)
		{
			power*=c;
		}
		sum+=power;
	}
	printf("%d\n", sum);
	return 0;	
}

