/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/




#include <stdio.h>

int main()
{
    int X, Y, N;
    scanf("%d %d %d", &X, &Y, &N);

    int c1, c2;
    c1 = N * X;
    c2 = (N / 3) * Y + (N % 3) * X;

    if (c1 >= c2)
        printf("%d", c2);
    else
        printf("%d", c1);

    return 0;
}
