
///////////////////////////////////////////////////////////////////////////
//                                                                       //
//    Function Name     :      OddFactorial                              //
//    Input             :      Integer                                   //
//    Output            :      Returns the product of odd numbers        //
//    Description       :      Calculates the odd factorial of a number  //
//    Date              :      30/10/2026                                //
//    Author            :      Siddesh Sunil Choudhari                   //
//                                                                       //
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>

int OddFactorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        iNo--;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt = iCnt - 2)
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

    iRet = OddFactorial(iValue);

    printf("Odd Factorial of number is %d\n", iRet);

    return 0;
}
