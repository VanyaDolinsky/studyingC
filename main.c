#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand( time(NULL) );
	int k[12], min, max, i, a, sum=0, e=0, e1=0, *p, *p1;
	double  m;
	printf("Input min=");
	scanf("%d", &min);
	printf("Input max=");
	scanf("%d", &max);
	printf("Input a=");
	scanf("%d", &a);
	for (i=0; i<12; i++)
	{
		k[i]=rand() %(max-min) + min;
		printf("%d ", k[i]);
	}
	for (i=0; i<12; i++)
	{
		if(a<k[i])
		{
			sum+=k[i];
			e++;
		}
	}
	m=sum/e;
	printf("m=%f ", m);
	p1=&k[11];
	printf("\n\n\n");
	for (p=&k[0]; p<=p1; p++)
	{
		if(m<*p)
		{
			e1++;
		}
	}
	printf("e1=%d\n", e1);
	return 0;	
}
