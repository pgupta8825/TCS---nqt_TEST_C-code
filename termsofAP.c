//Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.
#include<stdio.h>
void main()
{
	int i=1,n;
	scanf("%d",&n);
	while(i<=n)
	{
		
		if((3*i+2)%4==0)
			{
			n=n+1;
			i++;
			continue;
			}
			
		else{
		printf("%d ",3*i+2);
		i++;
			}	
	}
	
}
