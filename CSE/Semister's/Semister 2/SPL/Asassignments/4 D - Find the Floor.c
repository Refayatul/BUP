//Refayatul_BUP_CSE_22
#include <stdio.h>

int main() {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    if(x>=25 && x%25==0)
	    printf("%d\n",x/25);
	    else if(x>=25 && x%25!=0)
	    printf("%d\n",x/25+1);
	    else
	    printf("1\n");
	}
	return 0;
}
