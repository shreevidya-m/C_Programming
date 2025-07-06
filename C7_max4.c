#include <stdio.h>
int max(int a,int b, int c, int d) {
    int ans=a;
    if (ans<b){
        ans=b;
    }
    else if (c>ans){
        ans=c;
    }
    else if (d>ans){
        ans=d;
    }
    return ans;

}
int main() {
    int a, b, c, d;
    printf("Enter: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans= max(a, b, c, d);  
    printf("%d", ans);
    return 0;
}