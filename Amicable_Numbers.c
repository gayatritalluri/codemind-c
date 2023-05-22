#include<stdio.h>
int main()
{
    int i,a,b;
    int asum=0,bsum=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<a;i++){
        if(a%i==0){
            asum =asum+i;
        }
    }
    for(i=1;i<a;i++){
        if(b%i==0){
            bsum =bsum+i;
        }
    }
    if((a==bsum)  && (b==asum)){
        printf("Amicable");
    }
    else{
        printf("Not Amicable");
    }
}