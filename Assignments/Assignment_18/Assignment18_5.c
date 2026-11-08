///////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Input         : Integer, Integer
// Output        : Displays Pattern
// Description   : Displays a number and star boundary pattern
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(i == 1 || i == iRow)
            {
                printf("%d\t", j);
            }
            else if(j == 1)
            {
                printf("1\t");
            }
            else if(j == iCol)
            {
                printf("%d\t", j);
            }
            else
            {
                printf("*\t");
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