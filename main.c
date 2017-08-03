	#include <stdio.h>
int main()
{
	long int sum=0, c=1, paf, power=1;
	power=1;
	c=1;
	sum=0;
	long int tmp;
	while(1)
	{
		power = 1;
		for(paf=1; paf<=c; paf++)
		{
			power *= c;
		}
		if(sum + power < 0) break;
		printf("power = %d\n", power);
		printf("sum = %d\n", sum);
		sum += power;
		tmp = sum;
		c++;
	}
	printf("%d\n", sum);

	return 0;
}

