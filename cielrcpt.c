#include<stdio.h>

int main()
{
	int t, p;
	scanf("%d", &t);

	while(t--) {
		int ans = 0, x;
		x = 2048;
		scanf("%d", &p);

		while(p>0) {
			if(x > p)
				x /= 2;
			else {
				p -= x;
				ans++;
			}
		}
		
		printf("%d\n", ans);
	}
return 0;
}
