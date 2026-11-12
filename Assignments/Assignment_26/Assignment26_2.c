
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Input         : Character
// Output        : Nothing
// Description   : Converts uppercase characters into lowercase and
//                 lowercase characters into uppercase.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }

    printf("Converted character is : %c\n", ch);
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : Nothing
// Output        : Integer
// Description   : Accepts a character and calls Display function.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    if(scanf(" %c", &cValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    Display(cValue);

    return 0;
}
