û#include <stdio.h>
int main()
{
	int f, m, c;
	c=0;
	for(m=190; m<210; m++)
	{
		for (f=2; f<m; f++)
		{
			c=0;
			if (m%f==0)
			{
				c++;
				printf(" chislo %d deliteli %d kolichestvo %d\n", m, f, c);
				
			}
		}
	}
	return 0;	
}
