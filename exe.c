#include <stdio.h>
int main(void){
	double num1, num2, output;
	char operator;
	
	printf("Select the operator [+ : - : x : /] : ");
	scanf("%c",&operator);
	
	printf("Enter your Number 1 : ");
	scanf("%lf",&num1);
	
	printf("Enter your Number 2 : ");
	scanf("%lf",&num2);
	
	switch(operator){
		case '+':
			output=num1+num2;
			break;
			
		case '-':
			output=num1-num2;
			break;
			
		case 'x':
			output=num1*num2;
			break;
			
		case '/':
			output=num1/num2;
			break;
			
		default:
			printf("Eror");
			break;
	}
	
		printf("Out put : %.2lf",output);
	
}
