#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int FillArray (int *, int);
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
	int k;
	elem2(a,3);
	for (int i=0; i<3; i++)
	{
		printf("%d\n",a[i]);
 	}
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
