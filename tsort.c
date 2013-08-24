#include<stdio.h>

void merge(int a[],int l,int m,int h)
{
	int a1[h/2], a2[h/2];
	int n1, n2, i, j, k;

	n1 = m-l+1;
	n2 = h-m;

	for(i=0;i<n1;i++)
		a1[i] = a[l+i];
	for(j=0;j<n2;j++)
		a2[j] = a[m+j+1];

	a1[i] = 1000000;
	a2[j] = 1000000;
	i = 0;
	j = 0;

	for(k=l;k<=h;k++) {
		if(a1[i] <= a2[j])
			a[k] = a1[i++];
		else
			a[k] = a2[j++];
	}
}
void mergesort(int a[], int p, int r)
{
	if(p < r) {
		int q = (p+r)/2;
		mergesort(a, p, q);
		mergesort(a, (q+1), r);
		merge(a, p, q, r);
	}
}

int main()
{
	int n, i;
	scanf("%d", &n);

	int a[n];

	for(i=0;i<n;i++)
		scanf("%d", &a[i]);

	mergesort(a, 0, n-1);

	for(i=0;i<n;i++)
		printf("%d\n", a[i]);


	return 0;
}
