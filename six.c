6.WAP that takes name and marksof 5 students andsort data in descendingorderon the basis ofmarksand display them.
#include <stdio.h>
#include <string.h>

// Structure to store student information
struct student {
    char name[20];
    float marks;
};

int main() {
    int i, j;
    struct student temp, students[5];

    // Taking input of student information
    for(i = 0; i < 5; i++) {
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i+1);
        scanf("%f", &students[i].marks);
    }

    // Sorting student information in descending order of marks
    for(i = 0; i < 4; i++) {
        for(j = i+1; j < 5; j++) {
            if(students[i].marks < students[j].marks) {
                temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }

    // Printing sorted student information
    printf("\nStudent Information in descending order of marks:\n");
    printf("Name\t\tMarks\n");
    for(i = 0; i < 5; i++) {
        printf("%s\t\t%.2f\n", students[i].name, students[i].marks);
    }

    return 0;
}
