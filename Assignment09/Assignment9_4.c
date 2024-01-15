#include<stdio.h>

double FhtoCs(float fTemp)
{   
    float fAns=0.0;
    fAns=((fTemp-32)*5/9);
    return fAns;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter Temperature in Fahrenheit: \n");
    scanf("%f",&fValue);

    dRet=FhtoCs(fValue);
    printf("Fahrenheit to Celsius is: %f",dRet);

    return 0;
}