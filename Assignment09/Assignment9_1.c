#include<stdio.h>

double CircleArea(float Radius)
{
   float PI=3.14;
   float fArea=PI*Radius*Radius;
   return fArea;
}

int main()
{
    float fValue=0.0;
    double dRet=0.0;

    printf("Enter Radius\n");
    scanf("%f",&fValue);

    dRet=CircleArea(fValue);
    printf("Area is : %f",dRet);

    return 0;
}