/*NINTH PROGRAM
C PROGRAM TO FIND nTH fibonacci number 
BY SHUBHAM SHARMA DATE :25 SEP 2024*/
#include<stdio.h>
int main()
{
int n , a0 , a1 , sum;
printf("Welcome\nPlease enter a nth number below which you want fibonacci series :");
scanf("%d",&n);
a0 = 0;
a1 = 1;
printf("0  1  ");
while(a0 + a1 <=n)
{
    sum = a0 + a1;
	printf("%d  ",sum );
	a0 = a1;
	a1 = sum ;
	
}
return 0;
}
