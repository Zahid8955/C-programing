#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");  // Changed semicolon to colon for clarity
    scanf("%d", &n);

    if (n > 0) {
        printf("%d is positive\n", n);  // Added newline for cleaner output
    } else if (n < 0) {
        printf("%d is negative\n", n);
    } else {
        printf("%d is zero\n", n);
    }

    return 0;
}
