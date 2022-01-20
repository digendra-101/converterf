#include <stdio.h>
int factorial(int number);
void main()
{
    int a, b, c;
    printf("enter a number\n ");
    scanf("%d", &a);
    printf("enter 1 to add value\n enter 2 to minus \n enter 3 to multiply \n enter 4 to divide\n enter a 5 for factoril \n");
    scanf("%d", &c);

    switch (c)
    {
    case 1:

        printf("enter b\n");
        scanf("%d", &b);
        printf("%d + %d = %d", a, b, a + b);
        break;
    case 2:

        printf("enter b\n");
        scanf("%d", &b);
        printf("%d - %d = %d", a, b, a - b);
        break;
    case 3:

        printf("enter b\n");
        scanf("%d", &b);
        printf("%d x %d = %d", a, b, a * b);
        break;
    case 4:
        printf("enter b\n");
        scanf("%d", &b);
        printf("%d / %d = %d", a, b, a / b);
        break;
    case 5:
        printf("%d", factorial(a));
        break;
    }
}
int factorial(int number)
{
    if (number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return (number * factorial(number - 1));
    }
}