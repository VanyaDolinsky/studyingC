#include <stdio.h>
int main()
{
	int k, res=1;
	float m;
	printf("Input m=");
	scanf("%f", &m);
	for (k=0; res<=m; k++)
	{
		res*=3;
	}
	printf("Result k=%d\n", k);

	return 0;	
}
