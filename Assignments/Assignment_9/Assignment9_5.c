
///////////////////////////////////////////////////////////////////////////
//                                                                       //
//    Function Name     :      FactorialDiff                             //
//    Input             :      Integer                                   //
//    Output            :      Returns even factorial minus odd factorial//
//    Description       :      Calculates the difference between even    //
//                             and odd factorials                        //
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

int FactorialDiff(int iNo)
{
    int iEvenFact = 0;
    int iOddFact = 0;
    int iDiff = 0;

    iEvenFact = EvenFactorial(iNo);
    iOddFact = OddFactorial(iNo);

    iDiff = iEvenFact - iOddFact;

    return iDiff;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d\n", iRet);

    return 0;
}
