#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n%5==0  ){
        printf("Divisible\n");
    }
    else if(n%11!=0){
        printf("Not Divisible\n");
    }
   
    return 0;
}