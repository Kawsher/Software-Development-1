/*********************** SORTING FUNCTION ***************************/
int bubble(int x[],int n)
{
    int hold,j,pass,i,switched = 1;
    for(pass = 0; pass < n-1 && switched == 1; pass++)
    {
        switched=0;
        for (j=0; j<n-pass-1; j++)
            if (x[j]>x[j+1])
            {
                switched=1;
                hold = x[j];
                x[j] = x[j+1];
                x[j+1]=hold;
            }
    }
    return(0);
}
