#include<stdio.h>
int main()
{
    int i,j,a,b,f;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(i!=1)
        f=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                f=f+1;
            }
        }
        if(f==0)
        {
            printf("%d
",i);
        }
    }
}