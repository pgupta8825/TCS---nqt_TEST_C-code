/*Print the following pattern for the given N number of rows.
Pattern For N = 4
1
22
333
4444
*/
#include<stdio.h>
int main()
{
 int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i>=j){
                printf("%d",i);
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
}
