#include <stdio.h>

int main() {
    int binary_val, decimal_val = 0, binary_tmp, base = 1, digit;

    printf("Enter binary number: ");
    scanf("%d", &binary_val);

    binary_tmp = binary_val;
    while (binary_tmp > 0) {
        digit = binary_tmp % 10;
        binary_tmp = binary_tmp / 10;
        decimal_val += digit * base;
        base *= 2;
    }

    printf("Binary %d = decimal %d\n", binary_val, decimal_val);

    return 0;
}
