#include<stdio.h>

void NonFact(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo%iCnt)!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int ivalue=0;

    printf("Enter Number\n");
    scanf("%d",&ivalue);

    NonFact(ivalue);

    return 0;
}