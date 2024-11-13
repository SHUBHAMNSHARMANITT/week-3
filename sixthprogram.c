/*SIXTH PROGRAM
C PROGRAM TO PRINT FACTORIAL OF A NUMBER 
BY SHUBHAM SHARMA DATE :25 SEP 2024*/
#include<stdio.h>
int main()
{
int i ,n , fac;
printf("Welcome\nPlease Enter number for factorial:");
scanf("%d",&n);
fac=1;
i=1;
while(i<=n)
{
	fac *=i;
	i++;
}
printf("The factorial of %d = %d\nThank You",n,fac);
	return 0;
}
