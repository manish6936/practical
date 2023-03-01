9.WAP that takessid_id,nameand percentageof 10 students and print therecords of students who scored distinctions.
#include <stdio.h>

// Structure to store student information
struct student {
    int sid_id;
    char name[20];
    float percentage;
};

int main() {
    int i;
    struct student students[10];

    // Taking input of student information
    for(i = 0; i < 10; i++) {
        printf("Enter SID ID of student %d: ", i+1);
        scanf("%d", &students[i].sid_id);
        printf("Enter name of student %d: ", i+1);
        scanf("%s", students[i].name);
        printf("Enter percentage of student %d: ", i+1);
        scanf("%f", &students[i].percentage);
    }

    // Printing student information of students who scored distinction
    printf("\nStudent Information of students who scored distinction:\n");
    printf("SID ID\t\tName\t\tPercentage\n");
    for(i = 0; i < 10; i++) {
        if(students[i].percentage >= 80) {
            printf("%d\t\t%s\t\t%.2f\n", students[i].sid_id, students[i].name, students[i].percentage);
        }
    }

    return 0;
}
