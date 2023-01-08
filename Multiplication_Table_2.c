#include<stdio.h>
int main()
{
    int n1,n2,i;
    scanf("%d%d",&n1,&n2);
    for(i=1;i<=n2;i++)
    {
        printf("%d x %d = %d
",n1,i,n1*i);
    }
    return 0;
}