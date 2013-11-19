#include<iostream>
#include<cmath>
using namespace std;
typedef unsigned long long ull;
#define MAX 10000000000

bool is_p(ull n)
{
	ull nCopy = n;
	while(nCopy > 0) {
		if(nCopy%10 == 0 || nCopy%10 == 1 || nCopy%10 == 4 || nCopy%10 == 9)
			nCopy /= 10;
		else
			return false;
	}
return true;
}

bool is_p_last(ull n)
{
	if(n%10 == 0 || n%10 == 1 || n%10 == 4 || n%10 == 9)
		return true;
	else
		return false;
}

void gen_p(ull a[]) {

	ull i=10, k = 0, j = 4;
	a[k++] = 1;
	a[k++] = 4;
	a[k++] = 9;
	while(i <= MAX) {
		if(is_p_last(i)) {
			if(is_p(i)) {
				if((ull)sqrt(i) * (ull)sqrt(i) == i) {
					a[k++] = i;
				}
			}
		}
		i = j*j;
		j++;
	}
	//for(int l=k;l<3000;l++)
		//a[l] = 10000000001;
}

int main()
{
	ull array[120];
	gen_p(array);

	int t;
	cin >> t;
	ull a, b;

	while(t--) {
		cin >> a >> b;

		ull ans = 0;

		for(int i=0;i<120;i++) {
			if(array[i] <= b && array[i] >= a)
				ans++;
		}

		cout << ans << endl;
	}
return 0;
}
