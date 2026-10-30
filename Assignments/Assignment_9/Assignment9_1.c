
///////////////////////////////////////////////////////////////////////////
//                                                                       //
//    Function Name     :      Display                                   //
//    Input             :      Integer                                   //
//    Output            :      Displays a pattern of '*' and '#' symbols //
//    Description       :      Displays '*' and '#' based on the input   //
//    Date              :      30/10/2026                                //
//    Author            :      Siddesh Sunil Choudhari                   //
//                                                                       //
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
