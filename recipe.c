#include<stdio.h>

int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b, (a%b));
}

int main()
{
	int t, n, i, g;
	int a[52];
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		g = a[0];
		for(i=1;i<n;i++) {
			g=gcd(g,a[i]);
		}
		for(i=0;i<n;i++)
			printf("%d ", a[i]/g);
		printf("\n");
	}
return 0;
}
