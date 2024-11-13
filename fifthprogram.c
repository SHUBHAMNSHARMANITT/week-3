/*FIFTH PROGRAM
C PROGRAM TO PRINT SUM OF FIRST N NATURAL NUMBERS 
BY SHUBHAM SHARMA DATE :25 SEP 2024*/
#include<stdio.h>
int main()
{
int i ,n , sum ;
printf("Welcome\nPlease Enter number till you want sum :");
scanf("%d",&n);
sum=0;
i=0;
while(i<=n)
{
	sum = sum+i;
	i++;
}
printf("The sum of the all natural numbers upto %d = %d\nThank You",n,sum);
	return 0;
}
