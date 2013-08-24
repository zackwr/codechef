#include<stdio.h>

int main()
{
	int t, n, c, s, i, a;
	scanf("%d", &t);

	while(t--) {
		s = 0;
		scanf("%d %d", &n, &c);
		for(i=0;i<n;i++) {
			scanf("%d", &a);
			s += a;
		}

		if(s > c)
			printf("No\n");
		else
			printf("Yes\n");
	}
return 0;
}
