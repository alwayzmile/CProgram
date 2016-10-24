#include <stdio.h>

int main() {
  double firstNumber, secondNumber, temporaryVariable;

  printf("Enter first number: ");
  scanf("%lf", &firstNumber);

  printf("Enter second number: ");
  scanf("%lf", &secondNumber);

  temporaryVariable = firstNumber;
  firstNumber = secondNumber;
  secondNumber = temporaryVariable;

  printf("\nAfter swapping, first number = %.2lf\n", firstNumber);
  printf("After swapping, second number = %.2lf\n",  secondNumber);

  return 0;
}
