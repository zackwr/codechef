#include<stdio.h>

int main()
{
	int a[100002], b[100002];
	int n, i, f = 0;

	while(1) {
		scanf("%d", &n);
		if(n == 0)
			return 0;
		for(i=1;i<=n;i++) {
			scanf("%d", &a[i]);
			b[a[i]] = i;
		}

		for(i=1;i<=n;i++) {
			if(b[i]!=a[i])
				f = 1;
		}
		if(f == 0)
			printf("ambiguous\n");
		else
			printf("not ambiguous\n");
		f = 0;
	}
return 0;
}

