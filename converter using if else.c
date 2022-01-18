#include<stdio.h>
void main()
{
int a;
int b;
float c;
printf("enter 1 for kilogram \n enter 2 for gram\n enter 3 for milligram\n");
printf("enter the unit you want to convert\n");
scanf("%d",&a);
printf("enter the unit you want to convert into\n");
scanf("%d",&b);
if(a==1 && b==2)
{
    printf("enter the value you want to convert ");
scanf("%f",&c);
    printf("%f",c/1000);
}
else if(a==2 && b==1)
{
    printf("enter the value you want to convert ");
scanf("%f",&c);
    printf("%f",c*1000);
}
else if (a==2 && b==3)
{
    printf("enter the value you want to convert ");
scanf("%f",&c);
printf("%f",c*1000);
}
else if (a==1 && b==3)
{
    printf("enter the value you want to convert ");
scanf("%f",&c);
printf("%f",c*1000000);
}
else if (a==3 &&b==1)
{
    printf("enter the value you want to convert ");
scanf("%f",&c);
printf("%f",c/1000000);
}
else if (a==3 && b==2)
{
    printf("enter the value you want to convert ");
scanf("%f",&c);
printf("%f",c/1000);
}
}