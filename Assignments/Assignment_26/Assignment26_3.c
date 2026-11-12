
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Input         : Character
// Output        : Nothing
// Description   : Displays uppercase characters from the given
//                 character till Z and lowercase characters in
//                 reverse order till a.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    char cCount = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCount = ch; cCount <= 'Z'; cCount++)
        {
            printf("%c\t", cCount);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cCount = ch; cCount >= 'a'; cCount--)
        {
            printf("%c\t", cCount);
        }
    }
    else
    {
        return;
    }

    printf("\n");
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : Nothing
// Output        : Integer
// Description   : Accepts a character and calls Display function.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    if(scanf(" %c", &cValue) != 1)
    {
        printf("Invalid input\n");
        return 1;
    }

    Display(cValue);

    return 0;
}
