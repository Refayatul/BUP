/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/


#include <stdio.h>

int main() {
    int a, b, c, t, ans;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d", &a, &b, &c);
        if ((a > b && a < c) || (a < b && a > c)) {
            ans = a;
        } else if ((b > a && b < c) || (b < a && b > c)) {
            ans = b;
        } else {
            ans = c;
        }
        printf("%d\n", ans);
    }
    return 0;
}
