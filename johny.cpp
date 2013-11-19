#include<iostream>
using namespace std;

void merge(int a[], int ls, int le, int rs, int re)
{
	int ll = le - ls, rl = re - rs;

	int lh[ll], rh[rl];

	int r=0, l=0, i=0;

	for(i=rs;i<re;i++)
		rh[r++] = a[i];
	for(i=ls;i<le;i++)
		lh[l++] = a[i];

	for(i=ls, r=0, l=0; l<ll && r<rl; i++) {
		if(lh[l] < rh[r])
			a[i] = lh[l++];
		else
			a[i] = rh[r++];
	}

	for(; l<ll;i++)
		a[i] = lh[l++];
	for(; r<rl;i++)
		a[i] = rh[r++];
}

void mergesort(int a[], int l, int r)
{
	if(r - l <= 1)
		return;

	int ls = l, le = (l+r) / 2, rs = le, re = r;

	mergesort(a, ls, le);
	mergesort(a, rs, re);

	merge(a, ls, le, rs, re);
}

int bsearch(int a[], int k, int l, int r)
{
	if(r < l)
		return -1;
	int mid = (l+r)/2;

	if(a[mid] == k)
		return mid;
	else if(a[mid] < k)
		return bsearch(a, k, mid+1, r);
	else
		return bsearch(a, k, l, mid-1);
}

int main()
{
	int t;
	cin >> t;
	while(t--) {

		int n;
		cin >> n;
		int a[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		int k, ans;
		cin >> k;
		ans = a[k-1];

		mergesort(a, 0, n);

		cout << bsearch(a, ans, 0, n)+1 << endl;
	}
return 0;
}
