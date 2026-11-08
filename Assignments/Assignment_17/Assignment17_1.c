
///////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Displays the required number pattern
// Description   : Displays consecutive numbers from 1 to 9 repeatedly
//                 in a matrix format
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    int iValue = 1;

    if(iRow <= 0 || iCol <= 0)
    {
        printf("Invalid number of rows or columns\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            printf("%d\t", iValue);

            iValue++;

            if(iValue > 9)
            {
                iValue = 1;
            }
        }
        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Displays the required number pattern
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
