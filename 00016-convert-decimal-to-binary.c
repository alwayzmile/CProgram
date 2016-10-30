#include <stdio.h>

int main() {
    int binary_val = 0, decimal_val, decimal_val_tmp, a_binary_digit, count_1 = 0, base = 1;

    printf("Enter a decimal value: ");
    scanf("%d", &decimal_val);

    decimal_val_tmp = decimal_val;
    while(decimal_val_tmp > 0) {
        a_binary_digit = decimal_val_tmp % 2;
        if (a_binary_digit == 1) {
            count_1++;
        }

        decimal_val_tmp /= 2;
        binary_val += base * a_binary_digit;
        base *= 10;
    }

    printf("Decimal number %d = %d binary number\n", decimal_val, binary_val);
    printf("Number of 1's in the binary number is %d\n", count_1);

    return 0;
}
