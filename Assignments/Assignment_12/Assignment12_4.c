///////////////////////////////////////////////////////////////////////////
// Function Name : CountFour
// Input         : Integer
// Output        : Integer
// Description   : Counts the frequency of digit 4 in a number
// Date          : 03/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountFour(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    long long llNo = iNo;

    if(llNo < 0)
    {
        llNo = -llNo;
    }

    while(llNo != 0)
    {
        iDigit = llNo % 10;

        if(iDigit == 4)
        {
            iCount++;
        }

        llNo = llNo / 10;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = CountFour(iValue);

    printf("Frequency of digit 4 is : %d\n",iRet);

    return 0;
}