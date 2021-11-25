#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        return;
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t", iCnt);
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter Starting Point\n");
    scanf("%d", &iValue1);
    printf("Enter Ending Point\n");
    scanf("%d", &iValue2);
    RangeDisplay(iValue1, iValue2);

    if (iValue1 > iValue2 )
    {
        printf("Invalid Range\n");
    }
    
    return 0;
}