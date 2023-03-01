2.WAP to input elements of two (3x3)matricesand print sum of it in matrix format
#include <stdio.h>

int main() {
    int matrix1[3][3], matrix2[3][3], sum_matrix[3][3];
    int i, j;

    // Taking input of the first matrix
    printf("Enter the elements of the first matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &matrix1[i][j]);
        }
    }

    // Taking input of the second matrix
    printf("Enter the elements of the second matrix:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Adding the matrices
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            sum_matrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Printing the sum matrix in matrix format
    printf("The sum of the matrices is:\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d ", sum_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
