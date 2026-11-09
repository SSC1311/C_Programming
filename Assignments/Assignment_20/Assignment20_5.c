
///////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Pattern
// Description   : Displays a number pattern with boundary and diagonal
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow + 1; i++)
    {
        for(j = 1; j <= iCol + 1; j++)
        {
            if(i == 1 || i == iRow + 1 ||
               j == 1 || j == iCol + 1 ||
               i == j)
            {
                printf("%4d", j);
            }
            else
            {
                printf("    ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    if(iValue1 <= 0 || iValue2 <= 0)
    {
        printf("Invalid input\n");
        return -1;
    }

    Pattern(iValue1, iValue2);

    return 0;
}
