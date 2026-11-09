#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    if(iNo == 0 )
    {
        printf("0\n");

    }
    while (iNo != 0)
    {
        iDigt = iNo % 10;
        printf("%d\n", iDigt);
        iNo = iNo / 10;
    }
    

}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    DisplayDigit(iValue);

    return 0;
}