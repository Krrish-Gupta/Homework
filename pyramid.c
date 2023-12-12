#include <stdio.h>

int main() {
    int rows;

    // Input: Number of rows for the pyramid
    printf("Enter the number of rows for the pyramid: ");
    scanf("%d", &rows);

    // Output: Print the pyramid pattern
    printf("Pyramid Pattern:\n");

    for (int i = 1; i <= rows; i++) {
        // Print spaces before the '*' characters
        for (int j = 1; j <= rows - i; j++) {
            printf("  ");
        }
        // Print '*' characters
        for (int k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

return 0;
}
