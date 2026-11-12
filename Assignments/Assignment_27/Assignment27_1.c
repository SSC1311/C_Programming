
///////////////////////////////////////////////////////////////////////////
// Function Name : CountCapital
// Input         : Character Pointer
// Output        : Integer
// Description   : Counts the number of capital characters in a string
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    // Filter
    while(*str != '\0')
    {
        // Logic
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Accepts a string and displays the count of capital
//                 characters
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char arr[100];
    int iRet = 0;

    printf("Enter string : ");
    scanf("%99[^\n]", arr);

    iRet = CountCapital(arr);

    printf("Number of capital characters are : %d\n", iRet);

    return 0;
}
