#include <stdio.h>
#include <math.h>
int main()
{
	int n, N;
	double sum=0.0;
	for(N=800; N<=1000; N+=100)
	{
		sum=0;
		for(n=1; n<=N; n++)   
		{
			sum+=exp(sqrt(n));
		}
		printf("N=%d\n", N);
		printf("sum=%f\n", sum);
	}
	return 0;	
}
