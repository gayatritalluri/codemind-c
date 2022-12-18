#include<stdio.h>
int main()
{
    long int n,sq,a=1;
    scanf("%d",&n);
    sq=n*n;
    while(n!=0)
    {
        if(n%10!=sq%10)
        {
            a=0;
            break;
        }
        sq=sq/10;
        n=n/10;
    }
    if(a==1)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}