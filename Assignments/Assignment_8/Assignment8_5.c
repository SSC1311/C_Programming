///////////////////////////////////////////////////////////////////////////
//                                                                       //
//    Function Name     : TableRev                                       //
//    Input             : Integer                                        //
//    Output            : None                                           //
//    Description       : Displays multiplication table in reverse order //
//    Date              : 30/10/2026                                     //
//    Author            : Siddesh Sunil Choudhari                        //
//                                                                       //
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}