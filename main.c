#include <stdio.h>
int main()
{
	float x, y;
	printf("Input x=");
	scanf("%f", &x);
	printf("Input y=");
	scanf("%f", &y);
	if((x<=0 && x*x+y*y<=200*200 && y>=-x && y<=-x) || (x>=0 && x*x+y*y>=200*200 && x<=200 && y>=-200 && y<=200))
		printf("all right\n");
	else
		printf("doesn't own\n");
	return 0;	
}
