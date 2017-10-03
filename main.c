#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int FillArray (int *, int);
int main ()
{
	int a[3] = {1,2,3};
	int k;
	k=FillArray(a,3);
	printf("%d\n", k);
	return 0;
}

int FillArray (int a[], int size)
{
	int s=0;
	srand( time( NULL ) );
    for(int i=0; i<size; i++)
	{
		a[i]=rand()% 12 + 1;
		s+=a[i];
	}
	return s;
}
