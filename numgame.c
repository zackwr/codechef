#include<stdio.h>

int main()
{
	unsigned long long int t, n;
	scanf("%llu", &t);

	while(t--) {
		scanf("%llu", &n);

		if((n%2) == 0)
			printf("ALICE\n");
		else
			printf("BOB\n");
	}
return 0;
}
