#include<stdio.h>
int main()
{
    int i,n;
    int a=0,b=1;
    int c=0;
    scanf("%d",&n);
    printf("fibinocci series: %d%d",a,b);
    for(i=0;i<=n;i++)
    {
        a=b;
        b=c;
        c=a+b;
        printf("%d",c);
    }
    
    return 0;
}
