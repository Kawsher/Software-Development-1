/******************* SORTING FILE ************************/
void filesort()
{
    int marks[100],rollno[100],x[100],n,i,j,intake[100],section[100];
    char name[100][50];
    FILE *fp,*fm;

    fp = fopen("student.txt","r");
    fm = fopen("marks.txt","w");
    i=0;
    while(! feof(fp))
    {

        fscanf(fp,"%d %s %d %d %d \n",&rollno[i],&name[i],&marks[i],&intake[i],&section[i]);
        x[i]= marks[i];
        i=i+1;
    }

    n=i;

    bubble(x,n);

    for(i=0; i<n; i++)
    {
        printf(" %d\t",x[i]);
    }

    for(i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(x[i]==marks[j])
            {
                fprintf(fm,"%d %s %d %d %d\n",rollno[j],name[j],marks[j],intake[j],section[j]);
            }
        }
    }
    fclose(fm);
    fclose(fp);
    printf("\n\n\nPRESS ANY KEY");
    getch();

}
