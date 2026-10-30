///////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Input         : Integer
// Output        : Prints $ and * pattern
// Description   : Prints $ and * pattern
// Date          : 30/10/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}