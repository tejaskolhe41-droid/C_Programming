#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL chkequal(int ino1 , int ino2)
{
    if(ino1 == ino2 )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }

}

int main()

{


    int iValue1 = 0,  iValue2 = 0;
    BOOL bret = FALSE;

    printf("please enter two  number: ");
    scanf("%d  %d", &iValue1 , &iValue2);

    bret = chkequal(iValue1, iValue2);


    if(bret == TRUE)
    {
        printf("equal");

    }
    else
    {
        printf("not equal ");
    }

    return 0;
}