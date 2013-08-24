#include<stdio.h>
#include<math.h>

#define ABS(x) x<0?x=x*-1:x
int main()
{
	int t, n, x, i;
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);

		x = n-1;

		for(i=sqrt(n);i>1;i--) {
			if((n%i) == 0) {
				x = n/i - i;
				break;
			}
		}
		printf("%d\n", x);
	}
return 0;
}
