#include<stdio.h>
void main()
{
	int a=30, b=20, temp;
	printf("before swap value of a=%d and b=%d",a,b);
	temp=a;
	a=b;
	b=temp;
	printf(" swaped values a=%d and b=%d",a,b);
}