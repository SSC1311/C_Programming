///////////////////////////////////////////////////////////////////////////
// Function Name : CheckZero
// Input         : Integer
// Output        : Boolean
// Description   : Checks whether a number contains zero or not
// Date          : 03/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    int iDigit = 0;
    long long llNo = iNo;

    if(llNo < 0)
    {
        llNo = -llNo;
    }

    do
    {
        iDigit = llNo % 10;

        if(iDigit == 0)
        {
            return TRUE;
        }

        llNo = llNo / 10;

    }while(llNo != 0);

    return FALSE;
}

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;

    printf("Enter number : ");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero\n");
    }
    else
    {
        printf("There is no Zero\n");
    }

    return 0;
}