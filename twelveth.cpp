
#include<stdio.h>
int main()
{
	int rem,n;
	int sum=0;
	
	printf("Enter the n:");
	scanf("%d",&n);
	
	while(n!=0)
	{
		rem = n%10;
		n=n/10;
		sum+=rem;
	}
	
	printf("The sum is %d",sum);
	return 0;
}

