/************************* DATA USING ROLLNO***************************/
void rollin()
{
    int i,roll,ch,mark,roll1,intake,section,int1,sec1;
    char nam[50];
    FILE *fp;

    ch=1;
    while(ch)
    {
        system("cls");
        fp = fopen("student.txt","r");
        printf(" \n Enter Your Id Number - ");
        scanf("%d",&roll1);
        printf(" \n Enter Your Intake- ");
        scanf("%d",&int1);
        printf(" \n Enter Your Section- ");
        scanf("%d",&sec1);

        i=1;
        while(! feof(fp))
        {
            fscanf(fp,"%d %s %d %d %d\n",&roll,&nam,&mark,&intake,&section);
            if(roll1==roll&& sec1==section && int1==intake)
            {
                printf("\nROLLNO\t\tNAME\t\tMARKS\t\tIntake\t\tSection\n");
                printf(" %d\t\t%s\t\t%d\t\t%d\t\t%d\n",roll,nam,mark,intake,section);
                i=1;
                break;
            }
            else
                i=0;
        }
        if(i==0)
        {
            printf("\n!!!!!!!!!!! No Record Found !!!!!!!!!!!\n");
        }
        printf("\n\npress 1 to see student info, 0 to return to main menu\n");
        scanf("%d",&ch);
        fclose(fp);
    }
}

