#include<stdio.h>

int main()
{
	int t, n, i, s, l;
	scanf("%d", &t);

	while(t--) {
		s = 0;
		scanf("%d", &n);

		int w[n];

		for(i=0;i<n;i++)
			scanf("%d", &w[i]);
		l = w[0];
		for(i=0;i<n;i++) {
			s += w[i];
			if(w[i] < l)
				l = w[i];
		}
		printf("%d\n", s - (n*l));
	}
return 0;
}
