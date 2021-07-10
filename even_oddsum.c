#include<stdio.h>
void main()
{
	int n,r,even=0,odd=0;
	scanf("%d",&n);
	while(n!=0){
	
		r=n%10;
		
		
		n=n/10;
	
		
		if(r%2==0){
			even=even+r;
		}	
		else{
			odd=odd+r;
		}
	}
	printf("%d %d",even,odd);
}
