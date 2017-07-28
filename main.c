#include <stdio.h>
int main()
{
	int i, f;
	for (f=2; f<=100; f++)
		for (i=2; i<f; i++)
			if (f%i>0 && f%2>0)
			printf("%d\n", f);
	return 0;	
}
