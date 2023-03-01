11.WAP that stores roll,name and percentage of students to adatafileuntilyoupress y-yes and finally display the contents to the data file.

#include <stdio.h>

// Structure to store student information
struct student {
    int roll;
    char name[20];
    float percentage;
};

int main() {
    char ch;
    struct student s;

    // Writing student information to data file until user presses 'y' for yes
    FILE *fp;
    fp = fopen("studentdata.txt", "w");

    do {
        printf("Enter roll of student: ");
        scanf("%d", &s.roll);
        printf("Enter name of student: ");
        scanf("%s", s.name);
        printf("Enter percentage of student: ");
        scanf("%f", &s.percentage);

        fprintf(fp, "%d %s %.2f\n", s.roll, s.name, s.percentage);

        printf("Do you want to enter details of another student? (y/n): ");
        scanf(" %c", &ch);

    } while(ch == 'y' || ch == 'Y');

    fclose(fp);

    // Reading student information from data file and displaying it
    fp = fopen("studentdata.txt", "r");

    printf("\nStudent Information read from data file:\n");
    printf("Roll\tName\tPercentage\n");

    while(fscanf(fp, "%d %s %f", &s.roll, s.name, &s.percentage) != EOF) {
        printf("%d\t%s\t%.2f\n", s.roll, s.name, s.percentage);
    }

    fclose(fp);

    return 0;
}
