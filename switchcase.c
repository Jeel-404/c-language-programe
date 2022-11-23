#include <stdio.h>

void main()
{
    int a;
    
    printf("enter your percentage:");
    scanf("%d", &a);
    a = a / 10;
    switch (a)
    {

    case 1:
    case 8:
    case 7:
        printf("dinstiction");
        break;

    case 6:
        printf("first class");
        break;

    case 5:
        printf("second class");
        break;

    case 4:
        printf("third class");
        break;

    case 3:
        printf("fail ");
        break;

    default:
        printf("enter valid percentage ");
    }
}