#include <stdio.h>

void displayPyramidStar(int nLines) {
    for (int i = 0; i < nLines; i++) {
        for (int j = 0; j < nLines - i - 1; j++) {
            printf(" ");        
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            printf("*");
        }
        printf("\n");
    } 
}

int main() {
    for (int i = 1; i < 10; i++) {
        displayPyramidStar(i);
    }
    return 0;
}
