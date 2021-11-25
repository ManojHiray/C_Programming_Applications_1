/*
4. Accept number of rows and number of columns from user and display below pattern.
Input : iRow = 6 iCol = 5
Output : 
* * * * *
* @ @ @ *
* @ @ @ *
* @ @ @ *
* @ @ @ *
* * * * *
*/

#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
           if((i > 1) && (i < iRow) && (j >1) && (j < iCol))
           {
               printf("@\t");
           }
           else
           {
               printf("*\t");
           }
        }
        printf("\n");
    }
}
int main()
{
    int iValu1 = 0, iValu2 = 0;

    printf("Enter Number of Rows and Columns\n");
    scanf("%d %d", &iValu1, &iValu2);

    Pattern(iValu1, iValu2);
    return 0;
}