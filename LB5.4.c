/*
4.Write a program which accept number from user and count frequency of 4 in it.
Input : 2395
Output : 0
Input : 1018
Output : 0
Input : 9440
Output : 2
Input : 922432
Output : 1
*/

#include<stdio.h>

int CountFour(int);

int main()
{
    int iValue=0, iRet=0;

    printf("Enter Number");
    scanf("%d", &iValue);

    iRet=CountFour(iValue);
    printf("Count of Four is :%d\n",iRet);
    return 0;
}

int CountFour(int iNo)
{
    int iDigit=0, iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    while(iNo!=0)
    {
        iDigit=iNo % 10;
        if(iDigit==4)
        {
            iCnt++;
        }
        iNo=iNo/10;
    }
    return iCnt;
}
