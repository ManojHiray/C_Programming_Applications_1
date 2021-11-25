#include<stdio.h>

int MultDigits(int iNo)
{
    int iMult = 1, iDigit = 0;

    if (iNo<0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter Number\n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);
    printf("Multiplication of Digits :%d\n", iRet);

    return 0;
}