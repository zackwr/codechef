#include<stdio.h>

#define n 100000

void sieve(int p[], int m[])
{

	int i, j;
	p[0] = 0, p[1] = 0;
	for(i=2;i<=n;i++) 
		p[i] = 1;
	

	for(i=2;i<=n;i++) {
		if(p[i] == 1) {
			m[i] = 1;
			for(j=2;(j*i)<=n;j++) {
				p[j*i] = 0;
				m[i*j]++;
			}
		}
	}
}
int main()
{
	int i, k, t, a, b, x;
	int p[n] = {0};
	int m[n] = {0};
	sieve(p, m);
	/*for(i=0;i<=n;i++) {
		if(p[i] == 1)
			printf("%d\n", i);
	}*/

	scanf("%d", &t);
	while(t--) {
		x = 0;
		scanf("%d %d %d", &a, &b, &k);
		for(i=a;i<=b;i++) {
			if(m[i] == k)
				x++;
		}
		printf("%d\n", x);

	}
return 0;
}
