#include <stdio.h>

int main() {

	int n,i,even_sum=0,odd_sum=0;
   scanf("%d",&n);
    int arr_sum[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr_sum[i]);
    }
    
    for(i=0;i<n;i++){
      if (arr_sum[i]%2==0){
          even_sum=even_sum+arr_sum[i];
      }
        else
            odd_sum=odd_sum+arr_sum[i];    
    }
    printf("%d %d",even_sum,odd_sum);
}
