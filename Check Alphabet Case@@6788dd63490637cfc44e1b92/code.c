#include <stdio.h>
int main(){
       char alph[100];
       scanf("%s",&alph);
       if(alph>=A && alph<=Z){
        printf("Uppercase",alph);
       }
       else{
        printf("Lowercase",alph)
       }

}