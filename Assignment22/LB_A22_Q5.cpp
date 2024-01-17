#include<iostream>
using namespace std;

void  DisplaySchedule(char chDiv)
{
    
    switch(chDiv)
    {
        case 65:
        {
            printf("Your exam at 7 AM");
            break;
        }
        case 66:
        {
            printf("Your exam at 8.30 AM");
            break;
        }
        case 67:
        {
            printf("Your exam at 9.20 AM");
            break;
        }
        case 68:
        {
            printf("Your exam at 10.30 AM");
            break;
        }
        default:
        {
            printf("invalid division");
        }
        
    }
    
}

int main()
{
    char cVlaue='\0';
    

    printf("Enter Your Division\n");
    scanf("%c",&cVlaue);

    DisplaySchedule(cVlaue);

    
    return 0;
}