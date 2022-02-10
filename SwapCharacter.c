//swap characters between 1st and 4th position

#include<stdio.h>
#include<string.h>

void SwapChar();

int main()
{
    char str[] = "Marvellous";
    SwapChar(str);
}

void SwapChar(char *Brr)
{
    char Temp = '\0';
    int i = 0;

    for(i = 0; i < strlen(Brr)-1; i++)
    {
        if(Brr[i] <= Brr[4])
        {
            Temp = Brr[i];
            Brr[i] = Brr[i+1];
            Brr[i+1] = Temp;
        }
    }
    
    printf("%s", Brr);
}