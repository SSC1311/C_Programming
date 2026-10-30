///////////////////////////////////////////////////////////////////////////
//                                                                       //
//    Function Name     : Number                                         //
//    Input             : Integer                                        //
//    Output            : Checks whether number is Small, Medium or Large//
//    Description       : Checks whether number is Small, Medium or Large//
//    Date              : 30/10/2026                                     //
//    Author            : Siddesh Sunil Choudhari                        //
//                                                                       //
///////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("Medium\n");
    }
    else if(iNo > 100)
    {
        printf("Large\n");
    }
    else
    {
        printf("Boundary Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}