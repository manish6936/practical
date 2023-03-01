7.WAP thatreads names and address of different students and rearrangethem on the basis of name in alphabetic order.
#include <stdio.h>
#include <string.h>

// Structure to store student information
struct student {
    char name[20];
    char address[50];
};

int main() {
    int i, j;
    struct student temp, students[5];

    // Taking input of student information
    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter address of student %d: ", i+1);
        scanf("%s", students[i].address);
    }

    // Sorting student information in alphabetical order of name
    for(i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(strcmp(students[i].name, students[j].name) > 0) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Printing sorted student information
    printf("\nStudent Information in alphabetical order of name:\n");
    printf("Name\t\tAddress\n");
    for(i = 0; i < 5; i++) {
        printf("%s\t\t%s\n", students[i].name, students[i].address);
    }

    return 0;
}
