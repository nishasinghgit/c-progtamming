#include<stdio.h>
int main()
{
    int c,num,r=0,t,i;
    printf("enter the term");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        printf("%d",r);
        c=t+r;
        r=t;
        t=c;

    }
    return 0;

}