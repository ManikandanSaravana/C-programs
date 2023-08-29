#include<stdio.h>
void main()
{
    int n,i,flag=0;
    printf("ENTER A NUMBER TO CHECK:\n");
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        flag++;
    }
    if(flag==1)
    printf("THE GIVEN NUMBER %d IS A PRIME NUMBER:",n);
    else
    printf("THE GIVEN NUMBER %d IS NOT A PRIME NUMBER:",n);

}