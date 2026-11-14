#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;


    for (i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            if(i % 2 == 1)
            printf("%c   ",'A' + j - 1 );
            else
            printf("%c   ",'a' + j - 1 );

            
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