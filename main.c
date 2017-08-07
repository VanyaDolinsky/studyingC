#include <stdio.h>
#include <math.h>
int main()
{
	double	 n, i, k;
	double sum=0.0;
	for (n=1000; n<=5000; n*=5)
	{
		sum=0;
		for(i=1; i<n; i++)
		{
			sum+=i/(n*n);
		}
		printf("%f\n", sum);
	}

	sum=0;
	n=10000;
	for(i=1; i<10000; i++)
	{
		sum+=i/(n*n);
	}
	printf("%f\n", sum);
	k=n/10000;

	n = 1;
	sum=0;
	double sum_prev=0;
	k=1;
	while(k>0.0001)
	{
		sum = 0;
		for(int i = 1; i < n; i++)
		{
			sum+=(double)i/(i*i);
		}
		printf("sum = %f\n", sum);
		printf("sum_prev = %f\n", sum_prev);
		k = sum - sum_prev;
		sum_prev = sum;
		n++;
	}
	/*printf("%f\n", n);
	printf("%f\n", sum);*/

	return 0;	
}
