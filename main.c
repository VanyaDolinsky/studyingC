#include <stdio.h>
int main()
{
	int k;
	float n, res=1.0f;
	printf("Input n=");
	scanf("%f", &n);
	printf("Input k=");
	scanf("%d", &k);
	if (k==0)
	{
		res=1;
	}
	else if(k>0)
	{
		for(int i=1; i<=k; i++)
		{
			res*=n;
		}	
	}
	else
	{
		for(int i=-1; i>=k; i--)
		{
			res/=n;
		}	
	}

	printf("Result res=%f\n", res);		
	return 0;	
}
