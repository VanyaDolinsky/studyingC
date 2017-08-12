 #include <stdio.h>
 #include <stdlib.h>
 #include <time.h>
  int main()
  {
	srand( time( NULL ) );
	int a[15], max;
	srand( time(NULL) );
  	for(int i=0; i<15; i++)
  	{
  		a[i]=rand()% 12 + 1;
		printf("%d ", a[i]);
  	}
	max=a[1];
	for(int i=0; i<15; i++)
  	{
		if(max<a[i])
		{
			max=a[i];
		}
  	}
	
	printf("\n max= %d\n", max); 
  	return 0;	
  }
