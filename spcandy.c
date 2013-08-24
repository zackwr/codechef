#include<stdio.h>

int main()
{
	unsigned long long int t, n, k;
	scanf("%llu", &t);

	while(t--) {
		scanf("%llu %llu", &n, &k);
		if(k == 0)
			printf("0 %llu\n", n);
		else
			printf("%llu %llu\n", n/k, n%k);
	}
return 0;
}
