#include<stdio.h>

///////////////////////////////////////////////////////////////////////////
// Function Name : MultFact
// Input         : Integer
// Output        : Integer
// Description   : Returns multiplication of all factors of a number
// Date          : 03/11/2026
// Author        : Siddesh Sunil Choudhari
///////////////////////////////////////////////////////////////////////////

int MultFact(int iNo)
{
    int iCnt = 0;
    int iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);

    printf("Multiplication of factors is : %d\n",iRet);

    return 0;
}