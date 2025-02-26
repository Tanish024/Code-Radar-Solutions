#include <stdio.h>

int main(){
    int a,s,d;
    scanf("%d%d%d",&a,&s,&d);
    if((a+s>d) && (a+d>s) && (s+d>a)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
    return 0;
}
