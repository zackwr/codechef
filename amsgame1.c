#include<stdio.h>

int gcd(int a, int b)
{
	if(b > a)
		return gcd(b, a);
	if(b == 0)
		return a;
	else
		return gcd(b, a%b);
}

int main()
{
	int t, n, i, s;
	int a[1001] = {0};
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%d", &a[i]);
		s = a[0];
		for(i=1;i<n;i++)
			s = gcd(s, a[i]);
		printf("%d\n", s);
	}
return 0;
}
