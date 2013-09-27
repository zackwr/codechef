#include<stdio.h>

int main()
{
	int n, i, ans = 0, j;
	scanf("%d", &n);
	int a[n];

	for(i=0;i<n;i++)
		scanf("%d", &a[i]);
	for(i=0;i<n;i++) {
		for(j=i+1;j<n;j++)
			ans += a[i] & a[j];
	}

	printf("%d\n", ans);

return 0;
}
