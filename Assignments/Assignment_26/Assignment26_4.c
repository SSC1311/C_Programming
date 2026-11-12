
#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

///////////////////////////////////////////////////////////////////////////
// Function Name : ChkSpecial
// Input         : Character
// Output        : BOOL
// Description   : Checks whether the given character is a special
//                 symbol or not.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

BOOL ChkSpecial(char ch)
{
    if((ch == '!') || (ch == '@') || (ch == '#') ||
       (ch == '$') || (ch == '%') || (ch == '^') ||
       (ch == '&') || (ch == '*'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : Nothing
// Output        : Integer
// Description   : Accepts a character and checks whether it is
//                 a special symbol using ChkSpecial function.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter the character : ");
    if(scanf(" %c", &cValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    bRet = ChkSpecial(cValue);

    if(bRet == TRUE)
    {
        printf("It is special Character\n");
    }
    else
    {
        printf("It is not a special Character\n");
    }

    return 0;
}
