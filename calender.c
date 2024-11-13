/*ELEVENTH PROGRAM
TO FIND NEXT DATE OF THE INPUT GIVEN DATE 
BY SHUBHAM SHARMA DATE :18 SEP 2024*/
#include<stdio.h>
int main()
{
	int d,m,y ;
	printf("Welcome\nPlease enter the date in formate of d , m , y ;");
	scanf("%d%d%d",&d , &m , &y);
	if(m==1||3||5||7||8||10||12)
	{
		if(d<=30)
		{
			d+=1;
			printf("The next date is%d/%d/%d",d,m,y);
		}
		else
		{
			if(m<=11)
			{
				m+=1;
				printf("The next date is1/%d/%d",m,y);
				
			}
			else
			printf("The next date is 1/1/%d",y+=1);
		}
	}
		 else if (m==4||6||9||11)
	    {
	    	if(d<30)
	    	{
	    		d+=1;
	    		printf("The next date is%d/%d/%d",d,m,y);
			}
			else
			{
					if(m<=11)
			{
				m+=1;
				printf("The next date is1/%d/%d",m,y);
				
			}
			}
		}
		
		 
		else if (m==2)
		{
			if(d<28)
			{
				d++;
				printf("The next date is %d/%d/%d",d,m,y);
			}
			else if(d==28&&((y%4==0&&y%100!=0)||(y%400==0)))
			printf("The next date is29/2/%d",y);
			else
			printf("The next date is 1/3/%d",y);
			
			
			
		}
		
    printf("\nThank You");
    return 0;
}
