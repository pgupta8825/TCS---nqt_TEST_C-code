/*Print the following pattern for the given N number of rows.
Pattern For N = 4
A
BC
CDE
DEFG
*/
#include<stdio.h>
int main()
{
 int i,j,n,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    	k=i;
        for(j=1;j<=n;j++){
        	
            if(i>=j){
                printf("%c",63+k+j);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
