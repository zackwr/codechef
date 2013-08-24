#include<stdio.h>
#include<string.h>

int main()
{
	int i, k;

	scanf("%d %d", &i, &k);

	int t;
	int count = 0;
	int j;

	for(j=0;j<i;j++) {
		scanf("%d", &t);

		if(t % k == 0)
			count++;
	}

	printf("%d\n", count);
return 0;
}
