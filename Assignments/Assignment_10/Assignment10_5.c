///////////////////////////////////////////////////////////////////////////
// Function Name : SquareMeter                                           //
// Input         : Integer                                               //
// Output        : Double                                                //
// Description   : Converts square feet into square metres               //
// Date          : 30/10/2026                                            //
// Author        : Siddesh Sunil Choudhari                               //
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

double SquareMeter(int iValue)
{
    double dArea = 0.0;

    dArea = iValue * 0.092903;

    return dArea;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("Area in square metres is: %.6lf\n", dRet);

    return 0;
}