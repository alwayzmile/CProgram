#include <stdio.h>

int main() {
	double firstNumber, secondNumber, productOfTwoNumbers;
	
	printf("Enter two numbers: ");
	scanf("%lf %lf", &firstNumber, &secondNumber);
	
	productOfTwoNumbers = firstNumber * secondNumber;
	printf("Product: %.2lf", productOfTwoNumbers);
	
	return 0;
}