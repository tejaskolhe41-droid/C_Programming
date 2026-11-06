#include<stdio.h>

int RangSum(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0 ;

    if (iStart <= 0 ||  iEnd <= 0  ||  iStart > iEnd)
    {
        printf("invalid range:");
        return 0 ;
    }
    for (iCnt = iStart ; iCnt <= iEnd; iCnt++)
    {
       iSum = iSum + iCnt;


    }

    return iSum;
}
int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter stating point :");
    scanf("%d", &iValue1);

    printf("Enter ending  point :");
    scanf("%d", &iValue2);

    

    iRet = RangSum(iValue1, iValue2);

    printf("Addition is %d", iRet);
    return 0;
}