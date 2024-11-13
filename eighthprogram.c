/*EIGHTH PROGRAM
C PROGRAM TO FIND THE LENGTH OF A NUMBER 
BY SHUBHAM SHARMA DATE :25 SEP 2024*/
#include<stdio.h>
int main()
{
int n , i  ;
printf("Welcome\nPlease Enter a number whose length is to be determined ;\n");
scanf("%d",&n);
i = 0;
while(n!=0)
{
	n=n/10;
	i++;
}
printf("The length of the Number = %d\nThank You",i);
	return 0;
}
