///////////////////////////////////////////////////////////////////////////
// Function Name : Pattern
// Input         : Integer
// Output        : Displays alphabets from A onwards
// Description   : Displays the specified number of alphabets
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0 || iNo > 26)
    {
        printf("Invalid input\n");
        return;
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("%c\t", 'A' + iCnt);
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Accepts input and calls Pattern function
// Date          : 09/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;

    printf("Enter number of elements : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}