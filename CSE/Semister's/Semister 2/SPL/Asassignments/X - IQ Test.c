/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/


#include <stdio.h>

int main() {
    int n, last_odd = -1, last_even = -1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        if (x % 2 == 0) {
            last_even = i;
        } else {
            last_odd = i;
        }
    }
    if (last_even != -1 && last_odd != -1) {
        if (last_even > last_odd) {
            printf("%d\n", last_even);
        } else {
            printf("%d\n", last_odd);
        }
    } else {
        if (last_even != -1) {
            printf("%d\n", last_even);
        } else {
            printf("%d\n", last_odd);
        }
    }
    return 0;
}
