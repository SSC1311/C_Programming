
///////////////////////////////////////////////////////////////////////////
// Function Name : ChkVowel
// Input         : Character Pointer
// Output        : BOOL
// Description   : Checks whether the given string contains vowels or not
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    // Logic
    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') ||
           (*str == 'i') || (*str == 'o') ||
           (*str == 'u') || (*str == 'A') ||
           (*str == 'E') || (*str == 'I') ||
           (*str == 'O') || (*str == 'U'))
        {
            return TRUE;
        }

        str++;
    }

    return FALSE;
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Accepts a string and checks whether it contains vowels
//                 or not
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];
    BOOL bRet = FALSE;

    printf("Enter string : ");
    scanf("%99[^\n]", arr);

    bRet = ChkVowel(arr);

    if(bRet == TRUE)
    {
        printf("Contains Vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    return 0;
}
