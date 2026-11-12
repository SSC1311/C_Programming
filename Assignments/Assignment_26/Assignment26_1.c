
#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
// Function Name : DisplayASCII
// Input         : Nothing
// Output        : Nothing
// Description   : Displays ASCII table from 0 to 255 in decimal,
//                 hexadecimal and octal representation.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

void DisplayASCII()
{
    int i = 0;

    printf("\n---------------------------------------------------------------\n");
    printf(" Symbol\t\tDecimal\t\tHexadecimal\tOctal\n");
    printf("---------------------------------------------------------------\n");

    for(i = 0; i <= 255; i++)
    {
        if(i >= 32 && i <= 126)
        {
            printf("  %c\t\t%d\t\t0X%02X\t\t%04o\n",
                   i, i, i, i);
        }
        else if(i <= 31)
        {
            printf("  Control\t%d\t\t0X%02X\t\t%04o\n",
                   i, i, i);
        }
        else
        {
            printf("  Extended\t%d\t\t0X%02X\t\t%04o\n",
                   i, i, i, i);
        }
    }

    printf("---------------------------------------------------------------\n");
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : Nothing
// Output        : Integer
// Description   : Entry point of the program.
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    DisplayASCII();

    return 0;
}
