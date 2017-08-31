#include <stdio.h>
int func(int *, int );
int main(void)
{
	int n, m, k;
	printf("Input n=");
	scanf("%d", &n);
	printf("Input m=");
	scanf("%d", &m);
	k=func(&n, m);
	printf("k=%d\n", k);
	return 0;	
}
int func(int *n, int m)
{
	int k=*n;
	if (k==0)
	{
		return 1;
	}	
	if(k<m)
	{
		return -1;
	}
	int s=k-1;
	return 2*func(&s, m);
}

	
