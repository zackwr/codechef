#include<stdio.h>

#define ABS(x,y) x>y?x-y:y-x
int ispalin(int n)
{
	int t = n, r = 0;
	while(t!=0) {
		r *= 10;
		r += t % 10;
		t /= 10;
	}
	if(r == n)
		return 1;
return 0;
}

void sieve(int a[])
{
	int i, j;
	a[0] = a[1] = 0;
	for(i=2;i<=1000000;i++)
		a[i] = 1;
	for(i=2;i<=1000;i++) {
		for(j=2;(j*i)<=1000000;j++) {
			if(a[i] == 1)
				a[i*j] = 0;
		}
	}
}

int main()
{
	int a[1000000] = {0}, b[114] = {0};
	int i, j = 0;
	unsigned long long int n;
	sieve(a);

	for(i=0;i<=1000000;i++) {
		if((a[i] == 1) && (ispalin(i) == 1))
			b[j++] = i;
	}
	b[113] = 1003001;
	scanf("%llu", &n);

	j = 0;
	while(1) {
		if(b[j] >= n) {
			printf("%d\n", b[j]);
			break;
		}
		j++;
	}
return 0;
}
