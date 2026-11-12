///////////////////////////////////////////////////////////////////////////
// Function Name : LastChar
// Input         : String, Character
// Output        : Integer
// Description   : Returns the index of last occurrence of a character
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function Name : LastChar
// Input         : String, Character
// Output        : Integer
// Description   : Finds the last occurrence of a character in a string
//
///////////////////////////////////////////////////////////////////////////

int LastChar(char *str, char ch)
{
    int iCnt = 0;
    int iPos = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iPos = iCnt;
        }

        iCnt++;
        str++;
    }

    return iPos;
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
    int iRet = 0;

    printf("Enter string:\n");
    scanf(" %19[^\n]", arr);

    printf("Enter the character:\n");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Input  : Marvellous Multi OS
//          M
// Output : 11
//
///////////////////////////////////////////////////////////////////////////