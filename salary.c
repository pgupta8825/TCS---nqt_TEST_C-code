#include<stdio.h>
#include<ctype.h>
#include<math.h>
void main(){
	float salary=0;
	int sal=0;
	char grade;
	scanf("%f",&salary);
	scanf(" %c",&grade);
	


	switch (toupper(grade)){
		
		case 'A':
				printf("You are in A\n");
				
				salary=salary+0.2*salary+0.5*salary+1700-0.11*salary;
				printf(" %d",(int)(ceil(salary)-salary<=0.5?ceil(salary):floor(salary)));
				break;
		case 'B': 
				salary=salary+0.2*salary+0.5*salary+1500-0.11*salary;
				printf(" %d",(int)(ceil(salary)-salary<=0.5?ceil(salary):floor(salary)));
				break;
		default:
				salary=salary+0.2*salary+0.5*salary+1300-0.11*salary;
				printf(" %d",(int)(ceil(salary)-salary<=0.5?ceil(salary):floor(salary)));
		
	}
}
