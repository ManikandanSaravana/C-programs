#include<stdio.h>
int factorial(int n)
{
    int fact=1,i;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
void main()
{
    int fact,n;
    printf("ENTER THE FACTORIAL NUMBER:\n");
    scanf("%d",&n);
    fact=factorial(n);
    printf("THE FACTORIAL OF %d IS:%d",n,fact);
}