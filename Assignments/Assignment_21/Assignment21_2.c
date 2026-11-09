#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : None
// Description   : Displays numbers from 1 to iCol in each row
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////
// Entry Point Function
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    if((iValue1 <= 0) || (iValue2 <= 0))
    {
        printf("Invalid input\n");
        return -1;
    }

    Pattern(iValue1, iValue2);

    return 0;
}