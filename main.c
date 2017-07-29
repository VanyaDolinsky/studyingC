#include <stdio.h>
int main()
{
	int i, f;
	printf("2\n");
	for (f=2; f<=100; f++)
	{
		for (i=2; i<f; i++)
		{
			if (f%i==0)
				break;
			if (f%i!=0 && f==i+1)
				printf("%d\n", f);
		}
	} 
	return 0;	
}
