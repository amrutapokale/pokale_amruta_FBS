#include<stdio.h>
void main()
{
	float sub1=87, sub2=90, sub3=61, sub4=91, sub5=95, totmarks, percentage;
	printf("marks of five subjects = %.1f %.1f %.1f %.1f %.1f ",sub1, sub2, sub3, sub4, sub5);
	totmarks=sub1+sub2+sub3+sub4+sub5;
	printf("total marks = %.1f",totmarks);
	percentage=(totmarks/500)*100;
	printf(" percentage = %.2f",percentage);
	
}