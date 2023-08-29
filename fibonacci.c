#include<stdio.h>
void main()
{
    int i,first=0,second=1,fibono,n;
    printf("ENTER A NUMBER:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",first);
        fibono=first+second;
        first=second;
        second=fibono;

    }

}
