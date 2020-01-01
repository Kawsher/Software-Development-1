/******************** OUTPUTING DATA ON SCREEN***************/
void fileprint()
{
    int marks[100],rollno[100],x[100],intake[100],section[100],i;
    char name[100][50];
    FILE *fp;

    system("cls");
    fp = fopen("student.txt","r");
    i=0;
    printf("Id No\t\tName\t\tMark\t\tIntake\t\tSection\n\n");
    while(!feof(fp))
    {
        fscanf(fp,"%d %s %d %d %d \n",&rollno[i],&name[i],&marks[i],&intake[i],&section[i]);
        printf(" %d\t\t%s\t\t%d\t\t%d\t\t%d\n",rollno[i],name[i],marks[i],intake[i],section[i]);
        i=i+1;
    }
    fclose(fp);
    printf("\n\n\nPRESS ANY KEY");
    getch();

}
