#include<stdio.h>

int main()
{
    printf("Enter the number: ");
    int n;
    scanf("%d",&n);
    switch(n%2 == 0)
    {
        case 1 : printf("It is Even");
                 break;
        case 0 : printf("It is Odd");
                 break;
    }
    return 0;
}