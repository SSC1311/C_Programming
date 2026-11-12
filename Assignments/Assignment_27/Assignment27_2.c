
///////////////////////////////////////////////////////////////////////////
// Function Name : CountSmall
// Input         : Character Pointer
// Output        : Integer
// Description   : Counts the number of small characters in a string
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt = 0;

    // Filter
    while(*str != '\0')
    {
        // Logic
        if((*str >= 'a') && (*str <= 'z'))
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
// Description   : Accepts a string and displays the count of small
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

    iRet = CountSmall(arr);

    printf("Number of small characters are : %d\n", iRet);

    return 0;
}
