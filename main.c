#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand( time(NULL) );
	int a[15], sum=0;
	for(int i=0; i<15; i++)
	{
		a[i]=rand()% 12 + 1;
		sum+=a[i];
		printf("%d ", a[i]); 
	}
	printf("\nsum = %d\n", sum); 
	return 0;	
}
