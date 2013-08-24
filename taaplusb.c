#include<stdio.h>

int main()
{
	int t, n, i;
	double e[100002];
	e[1] = .45;
	double ans[100002];
	ans[0] = 0;
	for(i=2;i<100001;i++)
		e[i] = .45 + (.1*e[i-1]);
	for(i=1;i<100001;i++)
		ans[i] = ans[i-1] + e[i];
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);
		printf("%lf\n", ans[n]);
	}
return 0;
}
