#include<stdio.h>
void PrintEven(int iNo)
{
    if(iNo<=0)
    {
        return;
    }
     for(int i=0; i<iNo; i++) 
     { 
        printf("%d ",2*(i+1)); 
     }
}
int main()
{
    int iValue=0;
    printf("Enter Number\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}