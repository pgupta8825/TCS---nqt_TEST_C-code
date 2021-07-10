#include<stdio.h>
void main(){
	
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		
		for(j=1;j<=2*n-1;j++){
			
			if(n-i<j & j<n+i){
				printf("*");
			}	
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}	
}
