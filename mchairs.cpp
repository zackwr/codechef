#include<iostream>
using namespace std;
typedef unsigned long long ull;
#define MAX 100000000

int a[MAX];

void gen()
{
	a[0] = 2;
	for(int i=1;i<MAX;i++)
		a[i] = (a[i-1] * 2) % 1000000007;
}
int main()
{
	gen();
	int t;
	cin >> t;
	while(t--) {
		ull n;
		cin >> n;
		cout << a[n-1]-1 << endl;
	}
return 0;
}
