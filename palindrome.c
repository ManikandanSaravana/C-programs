#include<stdio.h>
void main()
{
    int remainder,rev=0,n,temp;
    printf("ENTER THE NUMBER TO CHECK:\n");
    scanf("%d",&n);
    temp=n;
    while(n != 0)
    {
        remainder=n%10;
        rev=(rev*10)+remainder;
        n=n/10;
    }
    if(temp == rev)
    printf("THE GIVEN NUMBER %d IS IS A PALINDROME:",temp);
    else
    printf("THE GIVEN NUMBER %d IS  NOT A PALINDROME:",temp);
}
