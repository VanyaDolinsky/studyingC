#include <stdio.h>
int main()
{
	int a; // ����� ������� res = 1; ����� �� ������� res = 0
	
	printf("Input a=");
	scanf("%d", &a);

	if(a==2)
	{
		printf("easy\n");
	}

	for (int i=2; i<a; i++)
	{
		if (a%i==0)
		{
			printf("hard\n");
			break;
		}


		if (i==a-1)
		{
			printf("easy\n");
		}
	
	}

	
	return 0;	
}
