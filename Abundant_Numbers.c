#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    sum=sum-n;
    if(sum>n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}