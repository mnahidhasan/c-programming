#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++) {       // Outer loop for rows
        for (int j = 0; j < 3; j++) {   // Inner loop for columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n"); // Newline after each row
    }

    return 0;
}
