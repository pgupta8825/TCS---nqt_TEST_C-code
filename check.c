#include<stdio.h>
#include<ctype.h>
#include<math.h>
void main(){
	int salary=0;
	float sal=0;
	char grade;
	scanf("%d",&salary);
	scanf(" %c",&grade);
	


	switch (grade){
		
		case 'A':
				
				sal=salary+0.2*salary+0.5*salary+1700-0.11*salary;
				printf("%d",(int)(ceil(sal)-sal<=0.5?ceil(sal):floor(sal)));
				break;
		case 'B': 
				sal=salary+0.2*salary+0.5*salary+1500-0.11*salary;
				printf("%d",(int)(ceil(sal)-sal<=0.5?ceil(sal):floor(sal)));
				break;
		default:
				sal=salary+0.2*salary+0.5*salary+1300-0.11*salary;
				printf("%d",(int)(ceil(sal)-sal<=0.5?ceil(sal):floor(sal)));
				break;
		
	}
}
