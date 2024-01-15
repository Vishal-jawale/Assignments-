#include<stdio.h>

double SqrFeetToSqrMeter(float fValue)
{   
    float fAns=0.0;
    fAns=(0.0929*fValue);
    return fAns;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter Distance in Square_Feet: \n");
    scanf("%f",&fValue);

    dRet=SqrFeetToSqrMeter(fValue);
    printf("SqrFeet To SqrMeter is: %f",dRet);

    return 0;
}