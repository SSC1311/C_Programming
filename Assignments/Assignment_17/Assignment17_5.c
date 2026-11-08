
///////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Displays an incremental number matrix
// Description   : Displays numbers in which each row starts with
//                 its row number and increments column-wise
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iValue = 0;

    if(iRow <= 0 || iCol <= 0)
    {
        printf("Invalid number of rows or columns\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            iValue = i + j - 1;

            printf("%d\t", iValue);
        }

        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Displays an incremental number matrix
// Description   : Accepts number of rows and columns from the user
//                 and calls Pattern function
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
