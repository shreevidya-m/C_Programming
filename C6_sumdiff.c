#include <stdio.h>
int main(){
    int a,b;
    float c,d;
    printf("Enter: ");
    scanf("%d %d %f %f", &a, &b ,&c, &d);
    int sum1=a+b;
    int diff1=a-b;
    float sum2=c+d;
    float diff2=c-d;
    printf("%d %d\n%.1f %.1f", sum1,diff1,sum2,diff2);
    return 0;
}