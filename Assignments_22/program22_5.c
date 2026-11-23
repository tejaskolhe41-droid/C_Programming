#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j, k;
    for(i = 1; i <= iRow; i++)
    {
        for(k = 1; k < i; k++)
        {
           
            printf("  ");
        }
        for(j = i; j <= iCol; j++)
        printf("%d ", j);
printf("\n");
    }
}
int main()
{
    int  iValue1 = 0, iValue2 = 0;
    printf("Enter number of  row and  colums :");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}