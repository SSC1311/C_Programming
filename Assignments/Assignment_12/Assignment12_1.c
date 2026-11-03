///////////////////////////////////////////////////////////////////////////
// Function Name : DisplayDigit
// Input         : Integer
// Output        : Displays digits in reverse order
// Description   : Displays each digit of a number in reverse order
// Date          : 03/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void DisplayDigit(int iNo)
{
    int iDigit = 0;
    long long llNo = iNo;

    if(llNo < 0)
    {
        llNo = -llNo;
    }

    while(llNo != 0)
    {
        iDigit = llNo % 10;

        printf("%d\n",iDigit);

        llNo = llNo / 10;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    DisplayDigit(iValue);

    return 0;
}