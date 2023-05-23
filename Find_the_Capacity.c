#include<stdio.h>
int main(){
    int S,T,B;
    scanf("%d%d%d",&S,&T,&B);
    int C;
    C=(2*S*T*B*512)/1024;
    printf("%dKB",C);
}