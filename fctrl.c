#include<stdio.h>

int main()
{
        int t;

        scanf("%d", &t);


	while(t--) {
		long int  sum = 0;
		long int n; 
		scanf("%ld", &n);

		if(1 > n) 
			return 0;

		if(n > 1000000000) 
			return 0;
		while(n/5) {
			n = n/5;
			sum += n;
		}

		printf("%ld\n", sum);
	}
	
return 0;
}
