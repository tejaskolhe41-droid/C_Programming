#include<stdio.h>

void Pattern (int irow, int icol)

{
    int i, j;

    for( i = 1; i <= irow; i++)
    {
        for(j = 1; j<= icol; j++)
        if(i == 1 || i == irow || j == 1 || j == icol || i == j)
        {
            printf("%d ",  j);

        }
        else{
            printf("  ");
        }
        printf("\n");

    }
}

int main()

{
    int iValue1  = 0,  iValue2 = 0;
    printf("Enter number of rows and columns:");
    scanf("%d  %d", &iValue1, &iValue2);

  Pattern(iValue1, iValue2);
  return 0;
}