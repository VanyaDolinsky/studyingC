#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void
elem2 (int a[], int size)
{
	srand( time( NULL ) );
    for(int i=0; i<size; i++)
	{
		a[i]=rand()% 12 + 1;
	}
}

int main ()
{
	int a[3] = {1,2,3};
	elem2(a,3);
	for (int i=0; i<3; i++)
	{
		printf("%d\n",a[i]);
 	} 
	return 0;
}
