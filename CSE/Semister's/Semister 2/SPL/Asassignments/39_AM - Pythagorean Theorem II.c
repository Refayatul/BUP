/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, cnt = 0;
    scanf("%d", &n);

    for (int a = 1; a <= n; a++)
    {
        for (int b = a + 1; b <= n; b++)
        {
            double c = sqrt(a * a + b * b);
            if (floor(c) == c && c <= n)
                cnt++;
        }
    }

    printf("%d\n", cnt);
    return 0;
}
