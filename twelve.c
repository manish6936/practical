#include <stdio.h>


struct std{
    int roll;
    char name[20];
}s;

void write();
void read();
void append();
void delete_file();

int main() {
    int n;
    printf("Enter 1 for write, 2 for read , 3 for append, 4 for delete\n");
    scanf("%d", &n);
    switch(n) {
        case 1:
            write();
            break;
        case 2:
            read();
            break;
        case 3:
            append();
            break;
        case 4:
            delete_file();
            break;
        default:
            printf("Invalid Input\n");
    }
    return 0;
}

void write() {
    FILE *fp;
    fp = fopen("C:\\temp\\commando.txt", "w");
    printf("Enter the name and roll of student: ");
    scanf("%s %d", s.name, &s.roll);
    fprintf(fp, "%s %d", s.name, s.roll);
    fclose(fp);
}

void read() {
    FILE *fp;
    fp = fopen("C:\\temp\\commando.txt", "r");
    while(fscanf(fp, "%s %d", s.name, &s.roll) != EOF) {
        printf("%s %d\n", s.name, s.roll);
    }
    fclose(fp);
}

void append() {
    FILE *fp;
    char c;
    fp = fopen("C:\\temp\\commando.txt", "a");
    do {
        printf("Enter the name and roll of student: ");
        scanf("%s %d", s.name, &s.roll);
        fprintf(fp, "%s %d", s.name, s.roll);
        printf("To continue press y and to discard press n: ");
        c = getchar();
        printf("\n");
    } while(c == 'y' || c == 'Y');
    fclose(fp);
}

void delete_file() {
    int status;
    status = remove("C:\\temp\\commando.txt");
    if (status == 0) {
        printf("File deleted successfully\n");
    } else {
        printf("Unable to delete the file\n");
    }
}
