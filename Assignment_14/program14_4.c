#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 0;

    iMult = iNo1 * iNo2 * iNo3;

    if(iNo1 == 0)
    {
        iMult = iNo2 * iNo3;
    }
    if(iNo2 == 0)
    {
        iMult = iNo1 * iNo3;
    }
    if(iNo3 == 0)
    {
        iMult = iNo1 * iNo2;
    }

    if(iNo1 == 0 && iNo2 == 0)
    {
        iMult = iNo3;
    }
    if(iNo2 == 0 && iNo3 == 0)
    {
        iMult = iNo1;
    }
    if(iNo1 == 0 && iNo3 == 0)
    {
        iMult = iNo2;
    }
    if(iNo1 == 0 && iNo2 == 0 && iNo3 == 0)
    {
        iMult = 0;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers: ");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    printf("Multiplication is: %d", iRet);

    return 0;
}