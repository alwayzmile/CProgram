// Accept number of days
// The application will print out the represented number of days
// as `year, month, week, day` format

#include <stdio.h>

void printNDaysFormatted(int nDays) {
    int nDaysLeft, year, month, week;
    nDaysLeft = nDays;

    year = nDaysLeft / 365;
    nDaysLeft -= year * 365;

    month = (nDaysLeft > 0) ? nDaysLeft / 30 : 0;
    nDaysLeft -= month * 30;
    
    week = (nDaysLeft > 0) ? nDaysLeft / 7 : 0;
    nDaysLeft -= week * 7;

    printf("%d days = %d year, %d month, %d week, %d day\n", nDays, year, month, week, nDaysLeft);
}

int main() {
    printNDaysFormatted(25);
    printNDaysFormatted(75);
    printNDaysFormatted(1999);

    return 0;
}
