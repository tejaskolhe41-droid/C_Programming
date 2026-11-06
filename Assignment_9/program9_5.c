#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
     int iFact = 1;

     if(iNo < 0)

     {
        iNo = -iNo;

    }
    for (iCnt = 2; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }



    

    return iFact;
}
int OddFactorial(int iNo)
{
    int iCnt = 0;
     int iFact = 1;

     if(iNo < 0)

     {
        iNo = -iNo;

    }
    for (iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        iFact = iFact * iCnt;
    }
    


    

    return iFact;
}
int FactorialDiff(int iNo)
{
    int iEven = 0, iOdd = 0;

    iEven = EvenFactorial(iNo);
    iOdd = OddFactorial(iNo);

    return iEven - iOdd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);
    printf("Factorial difference  is : %d", iRet);

    return 0;
}