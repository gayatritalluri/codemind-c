#include<stdio.h>
int main()
{
    int n,r,ln=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        n=n/10;
        if(ln<r)
        {
            ln=r;
        }
    }
    printf("%d",ln);
}