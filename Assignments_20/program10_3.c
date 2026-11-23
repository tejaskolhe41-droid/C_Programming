#include<stdio.h>

int KMtoMeter(int ino)
{
    int iMeter = 0;

    iMeter = ino  * 1000 ;

    return iMeter;
}

int main()
{
    int iValue = 0;
    int  iRet = 0;


    printf("Enter distance in Kilometrer  :");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is: %d", iRet);

    return 0;
}