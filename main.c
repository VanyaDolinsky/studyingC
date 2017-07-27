#include <stdio.h>
int main()
{
	int k, m=1, s=1, res, i, a, b;
	printf("Input k=");
	scanf ("%d", &k);
	for (i=0; i<k; i++)
	{
		res=m+s;
		m=s;
		s=res;
		printf("%d\n" , m);
		printf("%d\n", res);
	}
			m=1;
			s=1;
		for (b=0; b<2147483647; b++)
	{
			a=m+s;
			m=s;
			s=a;
	}
	printf("%d\n" , a);

	return 0;	
}
