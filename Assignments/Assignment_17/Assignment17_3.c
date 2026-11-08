
///////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Displays alternate alphabet and number rows
// Description   : Displays lowercase alphabets in odd-numbered rows
//                 and consecutive numbers in even-numbered rows
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    if(iRow <= 0 || iCol <= 0)
    {
        printf("Invalid number of rows or columns\n");
        return;
    }

    if(iCol > 26)
    {
        printf("Number of columns cannot exceed 26\n");
        return;
    }

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t", 'a' + j - 1);
            }
            else
            {
                printf("%d\t", j);
            }
        }

        printf("\n");
    }
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Displays alternate alphabet and number rows
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
