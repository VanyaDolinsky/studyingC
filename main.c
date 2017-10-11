#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void changeArr(int a[], int h);
void fullArr(int a[], int size);
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
void fullArr(int a[], int size)
{
	srand( time( 0 ) );
	for(int i=0; i<size; i++)
	{
		a[i]=rand()% 15 + 1;
	}
}
void changeArr(int a[], int h)
{
	int tmp;
	tmp = a[0];
	a[0] = a[h];
	a[h]  = tmp;
}	
