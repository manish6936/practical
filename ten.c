 #include <stdio.h>
 void main(){
 FILE *fp;
 fp = fopen("C:\\temp\\prapti.txt","w");
 int roll;
 char name[20];
 int per;
 int i, n = 3;
 for (i = 0; i < n;i++){
 	printf("Enter the roll, name and percentage of student %d : \n",i+1);
 	scanf("%d%s%d",&roll,name,&per);
 	fprintf(fp,"%d\t %s\t %d\n",roll,name,per);
 }
 fclose(fp);
 fp = fopen("C:\\temp\\prapti.txt","r");
 for (i = 0; i < n;i++){
 fscanf(fp,"%d%s%d",&roll,name,&per);
 printf("%d\t %s\t %d\n ",roll,name,per);
 
 }
 fclose(fp);
 
 
 }
