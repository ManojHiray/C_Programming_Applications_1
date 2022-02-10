/*
5.Write a program which accept number from user and return difference between
summation of all its factors and non factors.
Input : 12
Output : -34 (16 - 50)
Input : 10
Output : -29 (8 - 37)
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iSum1=0; 
    int iCnt=0;
    int iSum2=0;
    int iDiff=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    
    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iSum1=iSum1+iCnt;
        }    
             if((iNo%iCnt)!=0)
            {
                iSum2=iSum2+iCnt;
            
            }
        
    }
    return iDiff=iSum1-iSum2;
}

int main()
{
    int ivalue=0;
    int iRet=0;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    iRet=FactDiff(ivalue);
    printf("Factor Difference is:%d\n",iRet);
    
    return 0;

}
