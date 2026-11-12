#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
// Function Name : DisplaySchedule
// Input         : Character
// Output        : Displays Examination Schedule
// Description   : Displays examination timing according to the division
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

void DisplaySchedule(char chDiv)
{
    if((chDiv >= 'a') && (chDiv <= 'z'))
    {
        chDiv = chDiv - 32;
    }

    if(chDiv == 'A')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(chDiv == 'B')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(chDiv == 'C')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(chDiv == 'D')
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid Division\n");
    }
}

///////////////////////////////////////////////////////////////////////////
// Function Name : main
// Input         : None
// Output        : Integer
// Description   : Accepts division and displays the examination schedule
// Date          : 10/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int main()
{
    char cValue = '\0';

    printf("Enter your division : ");
    scanf(" %c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}