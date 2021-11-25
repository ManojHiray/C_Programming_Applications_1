#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 1000;

    iMeter = iMeter * iNo; 

    return iMeter;
}

int main()
{
    int iVlaue = 0, iRet = 0;

    printf("Enter Distance\n");
    scanf("%d", &iVlaue);

    iRet = KMtoMeter(iVlaue);
    printf("%d", iRet);

    return 0;
}