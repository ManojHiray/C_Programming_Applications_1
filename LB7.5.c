#include<stdio.h>

double SquareMeter(int iValue)
{
    float SquareFeet = 0.0929;
    
    SquareFeet = SquareFeet * iValue;

    return SquareFeet;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);
    printf("%f", dRet);

    return 0;
}