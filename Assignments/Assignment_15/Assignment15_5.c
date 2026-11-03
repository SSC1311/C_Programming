///////////////////////////////////////////////////////////////////////////
// Function Name : Percentage
// Input         : Two Integers
// Output        : Float
// Description   : Calculates percentage using total and obtained marks
// Date          : 03/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

float Percentage(int iTotal, int iObtained)
{
    float fPer = 0.0f;

    if(iTotal == 0)
    {
        return 0.0f;
    }

    fPer = ((float)iObtained / iTotal) * 100;

    return fPer;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks : ");
    scanf("%d",&iValue1);

    printf("Please enter obtained marks : ");
    scanf("%d",&iValue2);

    fRet = Percentage(iValue1,iValue2);

    printf("Percentage is : %.1f%%\n",fRet);

    return 0;
}