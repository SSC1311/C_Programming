///////////////////////////////////////////////////////////////////////////
// Function Name : strtogglex
// Input         : Character Pointer
// Output        : None
// Description   : Toggles the case of each alphabet in a string.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void strtogglex(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }
        else if(*str >= 'a' && *str <= 'z')
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
// Description   : Accepts a string and displays its toggled version.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];

    printf("Enter string : ");
    scanf("%99[^\n]", arr);

    strtogglex(arr);

    printf("Modified string is : %s\n", arr);

    return 0;
}