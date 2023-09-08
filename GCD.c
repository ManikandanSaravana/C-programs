#include<stdio.h>
#include<conio.h>
void main()
{    
    int num1,num2,rem;
    clrscr();
    printf("\nenter the number 1:");
    scanf("%d",&num1);
    printf("\nenter the number 2:");
    scanf("%d",&num2);
    while(num2 > 0)
    {
       rem=num1 % num2;
       num1=num2;
       num2=rem;
    }
    printf("\nthe gcd of a number is:%d",num1);
    getch();

}