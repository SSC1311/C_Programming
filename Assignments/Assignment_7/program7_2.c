///////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Input         : Integer
// Output        : Displays numbers from 1 to N
// Description   : Displays numbers from 1 to N
// Date          : 30/10/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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

    Display(iValue);

    return 0;
}