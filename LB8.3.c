
#include<stdio.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

   if(iStart > iEnd || iStart < 0)
   {
       return 0;
   }
   for(iCnt = iStart; iCnt <= iEnd; iCnt++)
   {
        iSum = iSum + iCnt;
   }
   return iSum;
   
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter Starting Point\n");
    scanf("%d", &iValue1);

    printf("Enter Ending Point\n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == 0)
    {
         printf("Invalid Range\n");
    }
    else
    {
        printf("Addition is %d\n", iRet);
    }

    return 0;
}