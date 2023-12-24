#include <stdio.h>

int main(){
    char ch;
    
    printf("Please enetr a char:\n");
    scanf("%c", &ch);

    printf("The code of %c is %d.\n", ch, ch);

    return 0;
}