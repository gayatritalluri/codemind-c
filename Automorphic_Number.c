#include <stdio.h>
int checkAutomorphic(int num){
    int sq = num * num;
    while(num != 0)
    {
        if(num % 10 != sq % 10){
            return 0;
        }
        num /= 10;
        sq /= 10;
    }
    return 1;
}

int main ()
{
    int num, sq = num * num ;
    scanf("%d",&num);
    if(checkAutomorphic(num))
        printf("Automorphic Number");
    else
        printf("Not an Automorphic Number");
    

}