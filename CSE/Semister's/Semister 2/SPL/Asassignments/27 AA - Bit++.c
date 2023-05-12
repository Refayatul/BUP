/*Refayatul_BUP_CSE_22
https://codeforces.com/profile/refayatul
https://www.codechef.com/users/refayatul
*/

#include <stdio.h>

int main()
{
   int n, X = 0;
   char s[4]; 
   scanf("%d", &n);

   for (int _ = 1; _ <= n; _++)
   {
      scanf("%s", s);
      if (s[1] == '+')
      {
         X++;
      }
      else
      {
         X--;
      }
   }

   printf("%d\n", X); 
   return 0;
}
