#include <stdio.h>

int main() {
    char alph;
    scanf("%c", &alph);
    
    if (alph >= 'A' && alph <= 'Z') {
        printf("Uppercase\n");
    } 
    else if(alph >= 'a' && alph <= 'z'){
         printf("Lowercase\n");
    }
    
    else {
        printf("Not an alphabet");
    }
    
    return 0;
}
