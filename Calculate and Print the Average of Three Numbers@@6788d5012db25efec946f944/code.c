#include <stdio.h>
int main (){
    int a,s,d;
    scanf("%d%d%d",&a,&s,&d );
    int n= (a+s+d)/3;
    printf(" Average: %.2d",n);
    return 0;
}