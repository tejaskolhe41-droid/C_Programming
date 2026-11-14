void Pattern(int iRow, int iCol)
{
    int i, j, n = 1;


    for (i = 1; i <= 3; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            printf("%d    ",n);
             n++;
            
        }
       printf("\n");
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns :");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}