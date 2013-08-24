#include<stdio.h>
#include<math.h>

int gcd(int a, int b)
{
	if(b == 0)
		return a;
	else
		return gcd(b, (a%b));
}

int smallest_prime_factor(int g)
{
	int i;
	for(i=2;i<=sqrt(g);i++){
		if((g%i) == 0)
			return i;
	}
return g;
}

int main()
{
	int t, n, i, g;
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);
		int a[n];

		for(i=0;i<n;i++)
			scanf("%d", &a[i]);

		g = 0;
		for(i=0;i<n;i++)
			g = gcd(a[i], g);
		
		g = smallest_prime_factor(g);
		if(g > 1)
			printf("%d\n", g);
		else
			printf("-1\n");
	}
return 0;
}
