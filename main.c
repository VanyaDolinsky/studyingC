#include <stdio.h>
int main()
{
	int a = 5;
	printf("a = %d\n", a); // ������� �������� a
	printf("ss_a = %d\n", &a); // ������� ����� ������ � ������, ������� ������ �������� a
	int *b = &a;
	
	printf("\n\n"); 
	
	*b = 10;
	printf("a = %d\n", a); 
	printf("b = %d\n", b);
	printf("value_b = %d\n", *b);

	return 0;	
}
