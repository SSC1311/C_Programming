///////////////////////////////////////////////////////////////////////////
// Function Name : ChkChar
// Input         : String, Character
// Output        : BOOL
// Description   : Checks whether a character is present in a string
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

///////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkChar
// Input         : String, Character
// Output        : BOOL
// Description   : Checks whether a character is present in a string
//
///////////////////////////////////////////////////////////////////////////

BOOL ChkChar(char *str, char ch)
{
    while(*str != '\0')
    {
        if(*str == ch)
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////////////////
//
// Entry Point Function
//
///////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[20];
    char cValue;
    BOOL bRet = FALSE;

    printf("Enter string:\n");
    scanf(" %19[^\n]", arr);

    printf("Enter the character:\n");
    scanf(" %c", &cValue);

    bRet = ChkChar(arr, cValue);

    if(bRet == TRUE)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Input  : Marvellous Multi OS
//          e
// Output : Character found
//
///////////////////////////////////////////////////////////////////////////