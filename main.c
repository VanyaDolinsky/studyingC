#include <stdio.h>
int main()
{
	int f, m, c;
	c=0;
	printf("chislo\tdeliteli\t\tkolichestvo\n");
	for(m=190; m<210; m++)
	{
		printf("%d\t", m);
		for (f=2; f<m; f++)
		{
			if (m%f==0)
			{
				if(c%4!=0)
				{
					printf(", ");
				}
				if(c%4==0 && c!=0)
				{
					printf(",\n\t");
				}
				printf("%d", f);
				c++;


			}
		}
		if(c==0)
		    printf("\t\t");
		if(c%4==1)
			printf("   \t");
		if(c%4==2)
			printf("       \t");
		if(c%4==3)
			printf(" \t");
		if(c%4==0 && c!=0)
			printf("\t");
		printf("\t\t%d", c);
		c=0;
		printf("\n");
	}
	return 0;	
}
