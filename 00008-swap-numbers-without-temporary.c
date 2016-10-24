#include <stdio.h>

int main() {
  double firstNumber, secondNumber;

  printf("Enter first number: ");
  scanf("%lf", &firstNumber);

  printf("Enter second number: ");
  scanf("%lf", &secondNumber);

  firstNumber = firstNumber + secondNumber;
  secondNumber = firstNumber - secondNumber;
  firstNumber = firstNumber - secondNumber;

  printf("\nAfter swapping, first number = %.2lf\n", firstNumber);
  printf("After swapping, second number = %.2lf\n", secondNumber);

  return 0;
}
