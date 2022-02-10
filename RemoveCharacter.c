#include<stdio.h>
#include<string.h>

void RemoveChar();

int main()
{
    char str[] = "Manoj Hiray";
    RemoveChar(str);
    
    return 0;
}

void RemoveChar(char Brr[])
{
    int i = 0, j = 0;
    int iNo = strlen(Brr);
    char ch = ' ';

    //for(i = 0; i < iNo; i++)
    while (i < iNo)
    {
        if(Brr[i] != ch)
        {
            Brr[j] = Brr[i];
            j++;
        }
        i++;
    }
    Brr[j] = '\0';
    printf("%s\n", Brr);
}
