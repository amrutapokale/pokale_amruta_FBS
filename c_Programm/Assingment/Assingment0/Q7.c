#include<stdio.h>
void main()
{
	int min=89,hr;
	printf("minutes :%d",min);
	hr=min/60;
	min=min%60;
	printf(" conversion hours=%d and minutes=%d",hr,min);
}