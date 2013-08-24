#include<stdio.h>

int main()
{
	int t, n, m, k;
	scanf("%d", &t);

	if((t > 100) || (t < 1))
		return 0;
	
	while(t--) {
		scanf("%d %d %d", &n, &m, &k);

		if(n==1) {
			if(m <= 2)
				printf("0\n");
			else
				printf("%d\n", k);
		}
		else if(m == 1) {
			if(n <= 2)
				printf("0\n");
			else
				printf("%d\n", k);
		}
		else
			printf("%d\n", (k+1)/2);
	}
return 0;
}
