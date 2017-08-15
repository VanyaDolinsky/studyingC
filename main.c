#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	srand( time(NULL) );
	int a[12], min, max, i;
	printf("Input min=");
	scanf("%d", &min);
	printf("Input max=");
	scanf("%d", &max);
	for (i=0; i<11; i++)
	{
		a[i]=rand() %(max-min) + min;
		printf("%d ", a[i]);
	}
	return 0;	
}
