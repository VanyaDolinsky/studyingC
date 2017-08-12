#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand( time( NULL ) );
	int a[15];
	for(int i=0; i<15; i++)
	{
		a[i]=rand()% 12 + 1;
		printf("%d ", a[i]); 
	}
	return 0;	
}
