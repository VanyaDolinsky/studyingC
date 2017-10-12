#include <stdio.h>
int main()
{
	FILE *f;
	int sum=0, size=0, a[100];
	f=fopen("input.txt", "r");
	for (int i=0; !feof(f); i++)
	{
		fscanf(f, "%d", &a[i]);
		size++;
	}
	fclose(f);
	f=fopen("output.txt", "w");
	for(int i=0; i<size; i++)
	{
		sum+=a[i];	
	}
	fprintf(f, "%d ", sum);
	fclose(f);
	return 0;	
}
