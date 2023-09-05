#include<stdio.h>
#include<conio.h>
int top=-1,n;
int a[5];
void push()
{
    if(top==5)
    printf("THE STACK IS OVERFLOW:");
    else{
        printf("ENTER THE NUMBER TO BE PUSHED:");
        scanf("%d",&n);
        top++;
        a[top]=n;
    }
}
void pop()
{
    if(top==-1)
    printf("STACK IS EMPTY:");
    else
    {
        printf("THE DELETION OF THE ELEMENT IN THE STACK IS:%d",a[top]);
        top--;
    }
}
void display()
{
    if(top==-1)
    printf("STACK IS EMPTY:");
    else{
        printf("THE TOP OF THE STACK IS:%d",a[top]);
    }
}
void main()
{
    int choice,con;
    do
    {
    printf("\n 1.push 2.pop 3.display 4.EXIT");
    printf("\nENTER YOUR CHOICE:");
    scanf("%d",&choice);
    if(choice==1)
    push();
    if(choice==2)
    pop();
    if(choice==3)
    display();
    if(choice==4)
    break;
    printf("\nIF YOU WANT TO CONTINUE PRESS 5:");
     scanf("%d",&con);
    }while(con==5);
}    
