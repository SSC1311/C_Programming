///////////////////////////////////////////////////////////////////////////
// Function Name : FirstChar
// Input         : String, Character
// Output        : Integer
// Description   : Returns the index of first occurrence of a character
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function Name : FirstChar
// Input         : String, Character
// Output        : Integer
// Description   : Finds the first occurrence of a character in a string
//
///////////////////////////////////////////////////////////////////////////

int FirstChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            return iCnt;
        }

        iCnt++;
        str++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Input  : Marvellous Multi OS
//          e
// Output : 4
//
///////////////////////////////////////////////////////////////////////////