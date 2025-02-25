#include <stdio.h>

int main() {
    char alph;
    scanf("%c", &alph);
    
    if (alph >= 'A' && alph <= 'Z') {
        printf("Uppercase\n");
    } else {
        printf("Lowercase\n");
    }
    
    return 0;
}
