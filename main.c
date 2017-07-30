û#include <stdio.h>
int main()
{
	int f, m, c;
	c=0;
	printf("chislo deliteli kolichestvo\n");
	for(m=190; m<210; m++)
	{
		for (f=2; f<m; f++)
		{
			c=0;
			if (m%f==0)
			{
				c++;
				printf("%d   %d %d %d %d \n", m, f, f, f, f, c);
			}
			else
			{
				printf("%d", m);	
			}
		}
	}
	return 0;	
}
