#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0


BOOL chkgreater(int ino)
{
    if(ino > 100)
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


    int iValue = 0;
    BOOL bret = FALSE;

    printf("please enter number: ");
    scanf("%d", &iValue);

    bret = chkgreater(iValue);


    if(bret == TRUE)
    {
        printf("greater");

    }
    else
    {
        printf("smaller");
    }

    return 0;
}