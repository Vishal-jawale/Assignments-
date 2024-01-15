//  INPUT:  Vishal Jawale
//  OUTPUT: Vishal Jawale

#include<stdio.h>

int main()
{   
    char Name[300];

    printf("Please Enter Full Name: \n");
    scanf("%[^\n]s",&Name);

    printf("Your Name Is: %s",Name);

    return 0;
}