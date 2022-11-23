#include <stdio.h>
int main()
{
    int a;
    printf("only enter no:");
    scanf("%d", &a);
    if (a >= 0)
    {
        printf("the number is positive");
    }
    else if (a < 0)
    {
        printf("the number is nagative");
    }
    else
    {
        printf("plz enter the valid number");
    }
}