
///////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Displays increasing column number pattern
// Description   : Displays numbers in an inverted triangular format
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    // Accept only positive dimensions
    if((iRow <= 0) || (iCol <= 0))
    {
        printf("Invalid input\n");
        return;
    }

    // Outer loop for rows
    for(i = 1; i <= iRow; i++)
    {
        // Print numbers starting from current row
        for(j = 1; j < i; j++)
        {
            printf("\t");
        }

        // Print column numbers
        for(j = i; j <= iCol; j++)
        {
            printf("%d\t", j);
        }

        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Entry point of the program
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns:\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
