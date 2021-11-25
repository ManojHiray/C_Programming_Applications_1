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