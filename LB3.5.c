/*
5. Accept on character from user and check whether that character is vowel
(a,e,i,o,u) or not.
Input : E Output : TRUE
Input : d Output : FALSE 
*/

#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

char CheckVowel(char ch)
{
    if(ch== 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
       ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    char cValue='\0';
    BOOL bRet=FALSE;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);

    if(bRet==1)
    {
        printf("It Is Vowel\n");
    }
    else
    {
        printf("It Is Not Vowel\n");
    }
    return 0;
}
