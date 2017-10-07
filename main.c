#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int fullArr(int *, int );
int changeArr(int *, int);
int main()
{
	int a[10];
	int i;
	printf("Input i=");
	scanf("%d", &i);
	fullArr(a, 10);
	changeArr(a, i);
	for (int j=0; j<10; j++)
	{
		printf("%d ", a[j]);
	}
	return 0;	
}
int fullArr(int a[], int size)
{
	srand( time( 0 ) );
	for(int i=0; i<size; i++)
	{
		a[i]=rand()% 15 + 1;
	}
	return 0;
}	
int changeArr(int a[], int h)
{
	int tmp;
	tmp = a[0];
	a[0] = a[h];
	a[h]  = tmp;
	return 0;
}	
