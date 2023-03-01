1.WAP to input ‘n’numbers and sort them in ascending order.
#include <stdio.h>

void sort(int x[], int n);

int main() {
    int x[100], n;
    printf("Enter the size of the array not more than 100 \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter the array element %d: ", i + 1);
        scanf("%d", &x[i]);
    }
    sort(x, n);
    return 0;
}

void sort(int x[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (x[i] > x[j]) {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    printf("\nThe numbers in sorted order are: ");
    for (i = 0; i < n; i++)
        printf("%d ", x[i]);
}

    
    
