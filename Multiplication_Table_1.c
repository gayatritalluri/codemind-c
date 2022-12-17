#include<stdio.h>
int main()
{
    int n,i,tab=1;
    scanf("%d",&n);
    for(i=1;i<=12;i++)
    {
        if(i%n!=n)
        {
            printf("%d x %d = %d
",n,i,n*i);
        }
    }
}