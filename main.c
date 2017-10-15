#include <stdio.h>
int main()
{
	int m, n, min=1010, min1=1010, s=0;
	int a[100], b[100];
	scanf("%d", &n);
	scanf("%d", &m);
	if (n>0)
	{
		for (int i=0; i<n; i++)
		{
			scanf("%d ", &a[i]);
		}
	}
	if (m<=9 && m!=0)
	{
		for (int i=0; i<m; i++)
		{
			scanf("%d ", &b[i]);
		}
	}
	for (int i=0; i<n; i++)
	{
		if (min>a[i])
		{
			min=a[i];
		}
	}
	for (int i=0; i<m; i++)
	{
		if (min1>b[i])
		{
			min1=b[i];
		}
	}
	if (min>min1 && min!=min1)
	{
		s=min1*10+min;
	}
	if (min<min1 && min!=min1)
	{
		s=min*10+min1;
	}
	if (min==min1)
	{
		s=min;
	}
	printf("%d\n", s);
	return 0;	
}

