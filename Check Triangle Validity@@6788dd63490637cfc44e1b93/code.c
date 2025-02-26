#include <stdio.h>
#include<math.h>
int main(){
    int a,s,d;
    scanf("%d%d%d",&a,&s,&d);
    if(pow(a,2)+pow(s,2)==pow(d,2)){
        printf("Valid");
    }
    else if(pow(s,2)+pow(a,2)==pow(d,2)){
        printf("Valid");
    }
     else if(pow(d,2)+pow(a,2)==pow(s,2)){
        printf("Valid");
    }
       else if(pow(s,2)+pow(d,2)==pow(a,2)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }




    return 0;
}
