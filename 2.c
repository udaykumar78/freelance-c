#include<stdio.h>
#include<stdlib.h>
struct stu_db{
};
void create(){
    FILE *fp;
    fp = fopen("stu_db.dat","rb+");
        if(fp == NULL){
            fp = fopen("stu_db.dat","wb+");
            if(fp == NULL){
                printf("Connot open file");
                exit(1)
}
void disp(){
    char c = fgetc(fp); 
    while (c != EOF) 
    { 
        printf ("%c", c); 
        c = fgetc(fptr); 
    } 
  
    fclose(fptr); 
}
void main()
{
    label:printf("\t\tM A I N  M E N U\n\t1. Create the Binary File\n\t2. Display the Contents of the file\n\t3. Seek a specific record\n\t4. Update the contents of a record\n\t5. Delete a record fro the specific name\n\t6. Exit\n\n\t\tPlease Enter your choice...[]");
    int choice;
    switch (choice)
    {
    case 1:
        create();
        break;
    case 2:
        disp();
        break;
    case 3:
        seek();
        break;
    case 4:
        update();
        break;
    case 5:
        delete();
        break;
    case 6:
        exit(1);
    default:
    printf("incorrect choice\n");
    goto label;
        break;
    }

}
