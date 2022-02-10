/*
4.Write a program which accept range from user and return addition of all even
numbers in between that range. (Range should contains positive numbers only)
Input : 23 30
Output : 108
Input : 10 18
Output : 70
Input : -10 2
Output : Invalid range
Input : 90 18
Output : Invalid range
*/

#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart < 0 || iStart > iEnd)
    {
        return 0;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }   
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iVlaue2 = 0, iRet = 0;

    printf("Enter Starting Point\n");
    scanf("%d", &iValue1);

    printf("Enter Ending Point\n");
    scanf("%d", &iVlaue2);

    iRet = RangeSumEven(iValue1, iVlaue2);
    
    if(iRet == 0)
    {
        printf("Invalid Range");
    }
    else
    {
    printf("Addition is %d\n", iRet);
    }
    
    return 0;
}
