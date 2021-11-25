#include<stdio.h>

double FhtoCs(float fTemp)
{
    float fCelsius = 0.0;

    fCelsius = (fTemp - 32) * 5/9;
    

    return fCelsius;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter Temprature in Fahrenheit\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);
    printf("%f", dRet);

    return 0;
}