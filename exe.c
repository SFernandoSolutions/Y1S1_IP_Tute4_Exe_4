#include <stdio.h>
int main(void){
//	create variables
	double num1, num2, output;
	char operator;
	
//	input operator
	printf("Select the operator [+ : - : x : /] : ");
	scanf("%c",&operator);
	
//	input 1 st number
	printf("Enter your Number 1 : ");
	scanf("%lf",&num1);
	
//	input 2 nd number
	printf("Enter your Number 2 : ");
	scanf("%lf",&num2);
	
//	switch operator
	switch(operator){
		case '+':
			output=num1+num2; //calculation
			break;
			
		case '-':
			output=num1-num2; //calculation
			break;
			
		case 'x':
			output=num1*num2; //calculation
			break;
			
		case '/':
			output=num1/num2; //calculation
			break;
			
		default:
			printf("Eror");
			break;
	}
	
//		output
		printf("Out put : %.2lf",output);
	
}
