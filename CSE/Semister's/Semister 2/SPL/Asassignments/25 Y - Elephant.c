/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/

#include <stdio.h>

int main()
{
    int n, ans = 0;
    scanf("%d", &n);
    ans = n / 5;
    if (n % 5 != 0) {
        ans += 1;
    }
    printf("%d\n", ans);
    return 0;
}
