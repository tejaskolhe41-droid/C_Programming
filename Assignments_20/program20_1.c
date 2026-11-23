#include<stdio.h>
void Pattern(int  iNo)
{
    int i;

    for(i = 0; i < iNo; i++)
    {
        
            printf("%c\t ", 'A' + i);
        

        
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number of elements: ");


    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;



}