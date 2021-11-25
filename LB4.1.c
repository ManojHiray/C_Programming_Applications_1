/*
iNo 12
iMult 144
iCnt 

*/

#include<stdio.h>
int MultFact(int iNo)
{
    int iMult =1;
    int iCnt =0;
   
   if(iNo<0)                    
    {
       iNo=-iNo;
    }

  for(iCnt=1; iCnt<iNo; iCnt++)   
    {
        if((iNo%iCnt)==0)
        {
           iMult=iMult*iCnt;
        }
    }
    return iMult;
   

}

int main()
{
int iValue = 0;
int iRet = 0;

printf("Enter number\n");
scanf("%d",&iValue);

iRet = MultFact(iValue);
printf("%d",iRet);

return 0;
}