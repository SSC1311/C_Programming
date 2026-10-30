///////////////////////////////////////////////////////////////////////////
// Function Name : MultipleDisplay
// Input         : Integer
// Output        : Displays first five multiples of N
// Description   : Displays first five multiples of N
// Date          : 30/10/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}