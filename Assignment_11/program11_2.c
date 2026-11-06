#include<stdio.h>

void RangDisplayEven (int iStart, int iEnd)
{
    int iCnt = 0;

    if (iStart > iEnd)
    {
        printf("invalid range:");
        return ;
    }
    for (iCnt = iStart ; iCnt <= iEnd; iCnt++)
    
        if(iCnt % 2 == 0)
    
    {
        printf("%d\t", iCnt);

    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter stating point :");
    scanf("%d", &iValue1);

    printf("Enter ending  point :");
    scanf("%d", &iValue2);

    RangDisplayEven(iValue1, iValue2);
    return 0;
}