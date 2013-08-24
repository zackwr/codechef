#include<stdio.h>

int main()
{
	int t, n, m, i, j;
	scanf("%d", &t);

	while(t--) {
		scanf("%d %d", &n, &m);
		int b[n];
		int x;

		for(i=0;i<n;i++)
			b[i] = 1;
		for(i=0;i<m;i++) {
			scanf("%d", &x);
			b[x-1] = 0;
		}

		j = 0;
		for(i=0;i<n;i++) {
			if(b[i] == 1) {
				j++;
				if (j%2 == 1)
					printf("%d ", i+1);
			}
		}
		j = 0;
		printf("\n");
		for(i=0;i<n;i++) {
			if(b[i] == 1) {
				j++;
				if (j%2 == 0)
					printf("%d ", i+1);
			}
		}
		printf("\n");
	}
return 0;
}
