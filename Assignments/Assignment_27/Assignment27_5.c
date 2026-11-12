
///////////////////////////////////////////////////////////////////////////
// Function Name : Reverse
// Input         : Character Pointer
// Output        : Void
// Description   : Reverses the given string and displays it
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Reverse(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    // Filter
    while(*end != '\0')
    {
        end++;
    }

    end--;

    // Logic
    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }

    printf("Reverse string is : %s\n", str);
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Accepts a string and displays it in reverse order
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];

    printf("Enter string : ");
    scanf("%99[^\n]", arr);

    Reverse(arr);

    return 0;
}
