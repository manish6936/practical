#include <stdio.h>

void add_matrices(int a[][3], int b[][3], int c[][3]);

int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;

    // input first matrix
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // input second matrix
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // add matrices
    add_matrices(a, b, c);

    // print result
    printf("Resultant matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void add_matrices(int a[][3], int b[][3], int c[][3])
{
    int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}
