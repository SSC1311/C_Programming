///////////////////////////////////////////////////////////////////////////
// Function Name : OddDisplay
// Input         : Integer
// Output        : Displays odd numbers up to N
// Description   : Displays odd numbers up to N
// Date          : 30/10/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt = iCnt + 2)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}