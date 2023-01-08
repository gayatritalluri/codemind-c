#include<stdio.h>
int main()
{
    int n,k,m;
    scanf("%d%d%d",&n,&m,&k);
    int min=k*m;
    if(n%min == 0)
    {
        printf("%d",n/min);
    }
    else 
    {
        printf("%d",n/min+1);
    }
}