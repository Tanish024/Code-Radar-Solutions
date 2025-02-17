#include <stdio.h>
void main(){
    int n;
    scanf("%d",&n);
    if(n%4==0 && n%100!=0){
        printf("Leap Year\n");
    }
    else if(n% 400== 0 || n % 100==0){
        printf("Leap Year\n");
    }
    // else if (n%100!=0){
    //     printf("Leap Year");
    // }
    else{
        printf("Not a Leap Year");
    }
}