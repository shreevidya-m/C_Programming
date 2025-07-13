#include <stdio.h>

int main() {
    char s[500];
    printf("Hello Folksssss! \n");
    printf("Enter a sentence here : ");
    scanf("%[^\n]", s);  //scanset used
    printf("You entered: %s", s);
    return 0;
}
