
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
// Function Name : Display
// Input         : Character
// Output        : Nothing
// Description   : Displays ASCII value of the given character in
//                 decimal, octal and hexadecimal format.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

void Display(char ch)
{
    unsigned char cValue = (unsigned char)ch;

    printf("Decimal       : %d\n", cValue);

    printf("Octal         : %04o\n", cValue);

    printf("Hexadecimal   : 0X%02X\n", cValue);
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : Nothing
// Output        : Integer
// Description   : Accepts a character and calls Display function
//                 to print its ASCII values.
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
