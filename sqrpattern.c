/*Print the following pattern for the given N number of rows.
Pattern For N = 4
4444
4444
4444
4444*/
#include<stdio.h>

void main(){

    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d",n);
        }printf("\n");
    }
    
}
