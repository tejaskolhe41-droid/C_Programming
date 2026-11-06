#include<stdio.h>
void Display(int info)
{
    int iCnt = 0;
    // Write Updater
    while (iCnt <= 1);
    {
        printf("*");
        iCnt++;
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number");
    scanf("%d",&iValue );

    Display(iValue);

    return 0;
}