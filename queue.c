#include<stdio.h>
#include<conio.h>
int front=0;
int rear=0;
int num,i;
int a[5];
void enqueue()
{
if(rear==4)
printf("\nTHE QUEUE IS FULL:");
else
{
    printf("\nENTER THE NUMBER TO BE ENQUEUED:");
    scanf("%d",&num);
    a[rear]=num;
    rear++;
}
}
void dequeue()
{
    if(front==rear)
    printf("\nQUEUE IS EMPTY");
    else
    {
        printf("\nTHE DEQUEUE OF THE NUMBER IS:%d",a[front]);
        front++;
    }
}
void display()
{
     if(front==rear)
    printf("\nQUEUE IS EMPTY");
    else
    {
        printf("\nDISPLAYING THE ELEMENT IN THE QUEUE");
        for(i=front;i<rear;i++)
        printf("\n%d",a[i]);
    }
}
void main()
{
    int ch,press;
    clrscr();
    do
    {
        printf("\n1.enqueue 2.dequeue 3.Display 4.EXIT");
        printf("\nENTER YOUR CHOICE:");
        scanf("%d",&ch);
        if(ch==1)
        enqueue();
        if(ch==2)
        dequeue();
        if(ch==3)
        display();
        if(ch==4)
        break;
        printf("\nif you want to continue press 1");
        scanf("%d",&press);
    }while(press==1);
    getch();
}