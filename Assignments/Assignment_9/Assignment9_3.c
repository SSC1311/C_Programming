
///////////////////////////////////////////////////////////////////////////
//                                                                       //
//    Function Name     :      EvenFactorial                             //
//    Input             :      Integer                                   //
//    Output            :      Returns the product of even numbers       //
//    Description       :      Calculates the even factorial of a number //
//    Date              :      30/10/2026                                //
//    Author            :      Siddesh Sunil Choudhari                   //
//                                                                       //
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 != 0)
    {
        iNo--;
    }

    for(iCnt = iNo; iCnt >= 2; iCnt = iCnt - 2)
    {
        iFact = iFact * iCnt;
    }

    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d\n", iRet);

    return 0;
}
