///////////////////////////////////////////////////////////////////////////
// Function Name : Multiply
// Input         : Three Integers
// Output        : Integer
// Description   : Multiplies three numbers by ignoring zero values
// Date          : 03/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Multiply(int iNo1, int iNo2, int iNo3)
{
    int iMult = 1;
    int iCount = 0;

    if(iNo1 != 0)
    {
        iMult = iMult * iNo1;
        iCount++;
    }

    if(iNo2 != 0)
    {
        iMult = iMult * iNo2;
        iCount++;
    }

    if(iNo3 != 0)
    {
        iMult = iMult * iNo3;
        iCount++;
    }

    if(iCount == 0)
    {
        return 0;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;

    printf("Please enter three numbers : ");
    scanf("%d %d %d",&iValue1,&iValue2,&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication is : %d\n",iRet);

    return 0;
}