#include<stdio.h>
void main()
{int i;
printf("Enter the year:");
scanf("%d",&i);
if(i!=100&&i%4==0||i%400==0)
{
printf("%d is a leap year",i);
}
printf("%d is not a leap year",i);
}
