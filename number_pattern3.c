#include<stdio.h>
void main()
{
	
	int i,n,j;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		for(j=1;j<=n;j++){
		
		if(j<=i){
			
			if(j==1 | j==i){
				printf("1");
			}
			else{
				printf("2");
			}
		}
		
		else{
			printf(" ");
			
		}
		}
		printf("\n");	
	}
}
