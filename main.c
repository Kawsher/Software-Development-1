#include<stdio.h>
#include<stdlib.h>
#include "Rollin.h"
#include "Fileprint.h"
#include "Filewrite.h"
#include "Filesort.h"
#include "Sorting.h"
void main()
{
    int marks[100],rollno[100],x[100],n,i,j,roll,c,mark,roll1;
    char name[100][10],nam[50];

    while(c!=6)
    {
        system("cls");
        printf("\t************* BUBT STUDENT MANAGEMENT **************\n\n");
        printf("GIVE CHOICE...\n");
        printf("   1 TO ENTER STUDENT INFO.\n");
        printf("   2 TO SEE STUDENT.TXT FILE\n");
        printf("   3 TO SORT FILE ON BASIS OF MARKS\n");
        printf("   4 TO PRINT STUDENT INFO. USING ROLL NO\n");
        printf("   5 TO EXIT\n\n-->");
        scanf("%d",&c);
        system("cls");
        switch(c)
        {
        case 1:
            filewrite();
            break;
        case 2:
            fileprint();
            break;
        case 3:
            filesort();
            break;
        case 4:
            rollin();
            break;
        case 5:
            return 0;
        default:
            break;
        }
    }

}
