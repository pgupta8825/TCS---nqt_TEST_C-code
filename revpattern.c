#include<stdio.h>
void main(){
	int N=0,i=0,j=0,k,l=0;
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		
		k=i;
		for(l=0;l<N-i;l++)
		{
		  printf(" ");
		}
		for(j=0;j<i;j++){
			printf("%d",k);
			k++;
		}
		printf("\n");
		k=0;		
}
	
}
