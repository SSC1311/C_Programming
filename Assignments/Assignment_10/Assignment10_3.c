///////////////////////////////////////////////////////////////////////////
// Function Name : KMtoMeter                                             //
// Input         : Integer                                               //
// Output        : Integer                                               //
// Description   : Converts kilometres into metres                       //
// Date          : 30/10/2026                                            //
// Author        : Siddesh Sunil Choudhari                               //
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance in kilometres: ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in metres is: %d\n", iRet);

    return 0;
}