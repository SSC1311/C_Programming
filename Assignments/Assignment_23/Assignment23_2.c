///////////////////////////////////////////////////////////////////////////
// Function Name : struprx
// Input         : Character Pointer
// Output        : None
// Description   : Converts all lowercase characters of a string into
//                 uppercase characters.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }

        str++;
    }
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Accepts a string and displays its uppercase version.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];

    printf("Enter string : ");
    scanf("%99[^\n]", arr);

    struprx(arr);

    printf("Modified string is : %s\n", arr);

    return 0;
}