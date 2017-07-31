û#include <stdio.h>
int main()
{
	int f, m, c;
	c=0;
	printf("chislo deliteli \t kolichestvo\n");
	for(m=190; m<210; m++)
	{
		printf("%d\t", m);
		for (f=2; f<m; f++)
		{
			if (m%f==0)
			{
				if(m!=f-1 && c!=0 && c%4!=0)
				{
					printf(", ");
				}

				c++;
				printf("%d", f);


				if(c%4==0)
				{
					printf("\n\t");
				}

			}
		}
		printf("\t\t%d", c);
		c=0;
		printf("\n");
	}
	return 0;	
}
