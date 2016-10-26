/**
 * Find the number of integers divisible by 5
 * between the given range num1 and num2,
 * where num1 < num2
 * Also display the total of number of integers
 * divisible by 5
 */

#include <stdio.h>

int main() {
  int i, num1, num2, count = 0, sum = 0;

  printf("Find the number of integer divisible by 5\nbetween num1 and num2 where num1 < num2\n");
  printf("Enter the value of num1 and num2: ");
  scanf("%d %d", &num1, &num2);

  printf("Integers divisible by 5 are");
  for (i = num1; i <= num2; i++) {
    if (i % 5 == 0) {
      printf(" %d", i);
      count++;
      sum += i;
    }
  }
  printf("\n");

  printf("The number of integers divisible by 5 between %d and %d is %d\n", num1, num2, count);
  printf("The total of integers divisible by 5 between %d and %d is %d\n", num1, num2, sum);

  return 0;
}
