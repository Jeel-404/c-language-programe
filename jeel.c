#include<stdio.h>
int main()
{
    int num;
    printf("\n enter day no btw 1 to 7:");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("\n sunday");
        break;
        case 2:
        printf("\n monday");
        break;
        case 3:
        printf("\n tuesday");
        break;
        case 4:
        printf("\n wednesday");
        break;
        case 5:
        printf("\n tuesday");
        break;
        default:
        printf("\n please enter proper value");
        break;
    }

    }

