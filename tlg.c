#include<stdio.h>

#define ABS(x) x>0?(x):(x*-1)
int main()
{
	int t, i, n, x = 0, p1 = 0, p2 = 0;
	scanf("%d", &t);
	if(t > 10000)
		return 0;
	int a, b;
	a = b = 0;

	for(i=1;i<=t;i++) {
		scanf("%d %d", &p1, &p2);
		a += p1;
		b += p2;

		if(a>b) {
			if((a-b)>x) {
				x = a-b;
				n = 1;
			}
		} else {
			if((b-a)>x) {
				x = b-a;
				n = 2;
			}
		}
	}
	printf("%d %d\n", n, x);
return 0;
}
