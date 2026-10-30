///////////////////////////////////////////////////////////////////////////
//                                                                       //
//    Function Name     : Factorial                                      //
//    Input             : Integer                                        //
//    Output            : Integer                                        //
//    Description       : Calculates factorial of a number               //
//    Date              : 30/10/2026                                     //
//    Author            : Siddesh Sunil Choudhari                        //
//                                                                       //
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
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

    iRet = Factorial(iValue);

    printf("Factorial of number is %d\n", iRet);

    return 0;
}