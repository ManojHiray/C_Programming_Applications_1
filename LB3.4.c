#include<stdio.h>
void DisplayConvert(char CValue)
{
    if(CValue>='A' && CValue<='Z' ) //65 - 90
    {
        CValue=CValue+32;
        printf("%c\t",CValue);
       
    }
    else if(CValue>='a' && CValue<='z') //97- 122
    {
        CValue=CValue-32;
        printf("%c\t",CValue);
    }
}
int main()
{
    char cValue='\0';
    printf("Enter Character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);
    return 0;
}