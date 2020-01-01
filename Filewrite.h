/*********************** FILE WRITING FUNCTION ******************************/
int filewrite()
{
    int roll,ch,mark,intake,section;
    char nam[50];
    FILE *fp;
    system("cls");
    fp = fopen("student.txt","a");
    ch =1;
    while(ch)
    {
        printf("Enter Your Id Number : ");
        scanf("%d",&roll);
        printf("Enter Your Name : ");
        scanf("%s",&nam);
        printf("Enter Your Marks: ");
        scanf("%d",&mark);
        printf("Enter Your Intake: ");
        scanf("%d",&intake);
        printf("Enter Your Section: ");
        scanf("%d",&section);
        fprintf(fp,"%d %s %d %d %d\n",roll,nam,mark,intake,section);
        printf("\n\n press 1 to continue,0 goto  main menu : ");
        scanf("%d",&ch);
        if(ch==1)
        {
            filewrite();
        }
    }
    fclose(fp) ;
}

