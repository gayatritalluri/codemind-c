#include<stdio.h>
int main()
{
    int i,num,flag=0;
    scanf("%d",&num);
    if(num==1||num==0)
    {
        printf("%d is a Perfect Square",num);
        flag=1;
    }
    for(i=2;i<=num/2;i++)
    {
        if(num==i*i)
        {
            printf("True");
            flag=1;
            break;
        }
    }
    if(flag==0)
    printf("False");
}