/*SEVENTH PROGRAM
C PROGRAM TO PRINT MULTIPLICATION TABLE OF A NUMBER N
BY SHUBHAM SHARMA DATE :25 SEP 2024*/
#include<stdio.h>
int main()
{
int i ,n , fac;
printf("Welcome\nPlease Enter number N for multiplication table:");
scanf("%d",&n);
i=1;
while(i<=10)
{
	printf("%d * %d = %d\n",n,i,n*i);
	i++;
}
    printf("Thank you");
	return 0;
}
