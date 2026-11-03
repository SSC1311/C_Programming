///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : String
// Output        : String
// Description   : Accepts full name from user and displays that name
// Date          : 03/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name : ");
    scanf(" %29[^\n]",Name);

    printf("Your name is %s\n",Name);

    return 0;
}