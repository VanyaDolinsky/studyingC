#include <stdio.h>
int main()
{
	int k, m=1, s=1, res, i;
	printf("Input k=");
	scanf ("%d", &k);
	for (i=0; i<k; i++)
	{
		res=m+s;
		m=s;
		s=res;
		printf("%d\n" , m);
	}
	return 0;	
}
