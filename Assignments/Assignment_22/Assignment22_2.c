///////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Input         : Integer
// Output        : Displays descending numbers with #
// Description   : Displays numbers from given number to 1 with #
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        printf("Invalid input\n");
        return;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t", iCnt);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Accepts input and calls Pattern function
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}