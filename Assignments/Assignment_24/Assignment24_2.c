///////////////////////////////////////////////////////////////////////////
// Function Name : CountChar
// Input         : String, Character
// Output        : Integer
// Description   : Returns the frequency of a character in a string
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
//
// Function Name : CountChar
// Input         : String, Character
// Output        : Integer
// Description   : Counts the occurrences of a character in a string
//
///////////////////////////////////////////////////////////////////////////

int CountChar(char *str, char ch)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
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

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return 0;
}

///////////////////////////////////////////////////////////////////////////
//
// Input  : Marvellous Multi OS
//          M
// Output : 2
//
///////////////////////////////////////////////////////////////////////////