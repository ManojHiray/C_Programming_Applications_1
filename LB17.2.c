/*
2. Accept N numbers from user and return difference between frequency of
even number and odd numbers.
Input : N : 7
Elements :85 66 3 80 93 88 90
Output : 1 (4 -3)
*/
#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int i = 0, iCnt1 = 0, iCnt2 = 0;

    for(i = 0; i < iLength; i++)
    {
        if((Arr[i] % 2) == 0)
        {
            iCnt1++;
        }
        if((Arr[i] % 2) == 1)
        {
            iCnt2++;
        }
    }
    return iCnt1 - iCnt2;
}
int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elememnts\n");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elemets\n",iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d:",iCnt+1);
        scanf("%d", &p[iCnt]);
    }
    iRet = Frequency(p, iSize);
    printf("%d", iRet);
    free(p);
    return 0;
}