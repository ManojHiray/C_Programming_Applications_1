/*
3.Write a program which accept number from user and count frequency of 2 in it.
Input : 2395
Output : 1
Input : 1018
Output : 0
Input : 9000
Output : 0
Input : 922432
Output : 3
*/

#include<stdio.h>

int CountTwo(int);

int main()
{
    int iValue= 0, iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = CountTwo(iValue);
    printf("Number of digits are : %d\n",iRet);
    
    return 0;
}
int CountTwo(int iNo)
{
    int iDigit = 0;
    int iCnt = 0;
    if(iNo < 0)     // Input updator
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit==2)
        {
            iCnt++;     // iCnt = iCnt + 1;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}
