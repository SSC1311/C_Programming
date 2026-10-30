///////////////////////////////////////////////////////////////////////////
//                                                                       //
//    Function Name     : Table                                          //
//    Input             : Integer                                        //
//    Output            : None                                           //
//    Description       : Displays multiplication table of a number      //
//    Date              : 30/10/2026                                     //
//    Author            : Siddesh Sunil Choudhari                        //
//                                                                       //
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}