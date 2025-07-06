#include <stdio.h>

int main() {
    char s[500];
    printf("Hello Folks! \n");
    printf("Enter a sentence here : ");
    scanf("%[^\n]", s);
    printf("You entered: %s\n", s);
    return 0;
}
