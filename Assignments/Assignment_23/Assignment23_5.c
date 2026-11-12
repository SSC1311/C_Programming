///////////////////////////////////////////////////////////////////////////
// Function Name : CountWhite
// Input         : Character Pointer
// Output        : Integer
// Description   : Counts the total number of white spaces present
//                 in a given string.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Accepts a string and displays the total number of
//                 white spaces present in it.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%99[^\n]", arr);

    iRet = CountWhite(arr);

    printf("Number of white spaces are : %d\n", iRet);

    return 0;
}