#include<stdio.h>
void main(){
float b;
int a;
printf("enter 1 if you want to convert gram into kilogram\n");
printf("enter 2 if you want to convert kilogram into gram \n");
printf("enter 3 if you want to convert metter into centimetter\n");
printf("enter 4 if you want to convert centimetter into metter\n");
printf("enter 5 if you want to convert celsius into  fahrenheit\n");
printf("enter 6 if you want to convert  fahrenheit into celsius\n");

scanf("%d",&a);
printf("enter the value you want to convert\n");
scanf("%f",&b);
switch (a){
case 1 : printf("%f gram =%f kilogram",b,b*1000);
break;
case 2: printf("%f kilogram = %f gram ",b,b/1000);
break;
case 3: printf ("%f metter = %f centimetter",b,b*100);
break;
case 4: printf("%f centimeeter = %f metter",b,b/100);
break;
case 5: printf("%f celsius = %f  fahrenheit",b,((b * 1.8) + 32));
break;
case 6: printf("%f fahrenheit = %f celsius ", b , (b-32)*5/9);
break;
}
}