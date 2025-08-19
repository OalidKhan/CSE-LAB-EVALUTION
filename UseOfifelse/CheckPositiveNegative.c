#include <stdio.h>

int main()
{
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);
    if (num > 0)
       printf("%d is a positive number.",num);
    else if (num < 0)
       printf("%d is not a positive number.",num);
    else
       printf("The number is Zero");
    return 0;
}

