#include<stdio.h>
int main()
{
    float i,n,s=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    s=s+1/i;
    {
        printf("%0.2f",s);
    }
}