#include <stdio.h>
int main (){
    char letter[100];
    int num;
    char let[100];
    scanf("%s%d%s",&letter,&num,&let);
    printf("Name: %s",letter ) ;
    printf("Age: %d",num);
    printf("Hobby: %s",let);
    return 0;
}