void Pattern(int iRow, int iCol)
{
    int i, j;


    for (i = 4; i >= 1; i--)
    {
        for(j = 1; j <= 5; j++)
        {
            printf("%d    ",i  );

            
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