#include<stdio.h>
int main()
{
    int n,i,s=0,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            s=s+a[i];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            sum=sum+a[i];
        }
    }
    if(s>sum)
    {
        printf("%d",s-sum);
    }
    else
    {
        printf("%d",sum-s);
    }
}