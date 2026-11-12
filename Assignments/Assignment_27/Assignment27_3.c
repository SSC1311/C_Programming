
///////////////////////////////////////////////////////////////////////////
// Function Name : Difference
// Input         : Character Pointer
// Output        : Integer
// Description   : Returns the difference between the frequency of small
//                 characters and capital characters
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Difference(char *str)
{
    int iSmall = 0;
    int iCapital = 0;

    // Filter
    while(*str != '\0')
    {
        // Logic
        if((*str >= 'a') && (*str <= 'z'))
        {
            iSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCapital++;
        }

        str++;
    }

    return (iSmall - iCapital);
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Accepts a string and displays the difference between
//                 small and capital characters
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%99[^\n]", arr);

    iRet = Difference(arr);

    printf("Difference is : %d\n", iRet);

    return 0;
}
