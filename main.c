#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int sumArray (int *, int);
int FillArray (int *, int );
int main (void)
{
	int a[3] = {1,2,3};
	int k;
	FillArray(a,3);
	for (int i=0; i<3; i++)
	{
		printf("%d\n",a[i]);
 	}
	k=sumArray(a,3);
	printf("%d\n", k);
	return 0;
}
int  FillArray (int a[], int size)
 {
	srand( time( NULL ) );
    for(int i=0; i<size; i++)
 	{
		a[i]=rand()% 12 + 1;
	}
	return 0;
}
int sumArray (int a[], int size)
{
	int s=0;
	srand( time( NULL ) );
    for(int i=0; i<size; i++)
	{
		s+=a[i];
	}
	return s;
}
