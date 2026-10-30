
///////////////////////////////////////////////////////////////////////////
//                                                                       //
//    Function Name     :      DollarToINR                               //
//    Input             :      Integer                                   //
//    Output            :      Returns the equivalent amount in INR      //
//    Description       :      Converts US dollars into Indian rupees    //
//    Date              :      30/10/2026                                //
//    Author            :      Siddesh Sunil Choudhari                   //
//                                                                       //
///////////////////////////////////////////////////////////////////////////

#include <stdio.h>

int DollarToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * 70;

    return iINR;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number of USD: ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}
