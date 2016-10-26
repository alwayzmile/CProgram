/**
 * Calculate the sum of digits in a given integer
 */

#include <stdio.h>

int main() {
  long num, temp, digit, sum = 0;

  printf("Input a number: ");
  scanf("%ld", &num);

  temp = num;
  while (temp > 0) {
    digit = temp % 10;
    sum += digit;
    temp = temp / 10;
  }

  printf("Sum of digits in integer %ld is %ld\n", num, sum);

  return 0;
}
