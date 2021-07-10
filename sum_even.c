#include<stdio.h>
void main(){
	
	int N;
	int i,sum=0;
	scanf("%d",&N);
	
	for(i=2;i<=N;i=i+2){
		
		sum=sum+i;
		
	}
	printf("%d",sum);
	
	
	
	
	
}
