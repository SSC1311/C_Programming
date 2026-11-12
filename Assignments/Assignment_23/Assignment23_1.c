///////////////////////////////////////////////////////////////////////////
// Function Name : strlwrx
// Input         : Character Pointer
// Output        : None
// Description   : Converts all uppercase characters of a string into
//                 lowercase characters.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Accepts a string and displays its lowercase version.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];

    printf("Enter string : ");
    scanf("%99[^\n]", arr);

    strlwrx(arr);

    printf("Modified string is : %s\n", arr);

    return 0;
}