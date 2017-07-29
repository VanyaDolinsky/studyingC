#include <stdio.h>
int main()
{
	int f, m, c;
	c=0;
	 for(m=190; m<210; m++)
	{
		for (f=2; f<m; f++)
		{
			if(m%f==0)
				c+=1;
			printf(" %d\n", " %d\n", " %d\n", m, f, c);

		}
	}
	return 0;	
}
