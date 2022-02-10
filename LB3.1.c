/*
1.Write a program which accept one number from user and print that number of
even numbers on screen.
Input : 7
Output: 2 4 6 8 10 12 14
*/

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
