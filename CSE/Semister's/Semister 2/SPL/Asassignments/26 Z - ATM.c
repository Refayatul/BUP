/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/



#include <stdio.h>

int main()
{
    int a;
    float b;
    scanf("%d %f", &a, &b);
    if ((a%5==0) && (b-a-0.5>=0))
    {
        printf("%.2f\n", b-a-0.5);
    }
    else
    {
        printf("%.2f\n", b);
    }
    return 0;
}
