/*Print the following pattern for the given number of rows.
Pattern For N = 5
E
DE
CDE
BCDE
ABCDE*/
#include<stdio.h>
int main()
{
 int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	k=i;
        for(j=1;j<=n;j++){
        	
            if(i>=j){
                printf("%c",65+n-1-i+j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
