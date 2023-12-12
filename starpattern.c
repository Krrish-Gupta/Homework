#include <stdio.h>

int main() {
    int rows;

    // Input: Number of rows for the star pattern
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Output: Print the star pattern
    printf("Star Pattern:\n");

    for (int i = 1; i <= rows; i++) {
        // Print '*' i times in each row
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        // Move to the next line after each row
        printf("\n");
    }

return 0;
}
