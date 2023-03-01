5.WAP that takes roll number,fname,lname of 5 students and prints thesame records in ascending orderon the basis of roll number.
#include <stdio.h>
// Structure to store student information
struct student {
    int roll;
    char fname[20];
    char lname[20];
};

int main() {
    int i, j;
    struct student temp, students[5];

    // Taking input of student information
    for(i = 0; i < 5; i++) {
        printf("Enter roll number of student %d: ", i+1);
        scanf("%d", &students[i].roll);
        printf("Enter first name of student %d: ", i+1);
        scanf("%s", students[i].fname);
        printf("Enter last name of student %d: ", i+1);
        scanf("%s", students[i].lname);
    }

    // Sorting student information in ascending order of roll number
    for(i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(students[i].roll > students[j].roll) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Printing sorted student information
    printf("\nStudent Information in ascending order of roll number:\n");
    printf("Roll\tFirst Name\tLast Name\n");
    for(i = 0; i < 5; i++) {
        printf("%d\t%s\t\t%s\n", students[i].roll, students[i].fname, students[i].lname);
    }

    return 0;
}
