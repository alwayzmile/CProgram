#include <stdio.h>

#define DAYS_IN_WEEK 7

int main() {
    int inDays;

    printf("The number of days: ");
    scanf("%d", &inDays);

    printf("%d year ", inDays / 365);
    printf("%d week ", inDays % 365 / DAYS_IN_WEEK);
    printf("%d day\n ", inDays % 365 % DAYS_IN_WEEK);

    return 0;
}
