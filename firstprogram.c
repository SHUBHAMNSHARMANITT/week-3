/*FIRST PROGRAM
C PROGRAM TO PRINT ODD NUMBERS FROM 1 TO N
BY SHUBHAM SHARMA DATE :25 SEP 2024*/
#include<stdio.h>
int main()
{
	int n , i;
	printf("Welcome\nPlease Enter Value of N:\n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if (i%2!=0)
		{
			printf("%d\n",i);
			i++;
		}
		else
		i++;
	}
	return 0;
}
