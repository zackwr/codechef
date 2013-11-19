#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int j = 0;
	while(true) {
		int n;
		cin >> n;
		if(n == 0)
			return 0;
		
		int a[n], avg = 0, result = 0;
		for(int i=0;i<n;i++) {
			cin >> a[i];
			avg += a[i];
		}
		avg /= n;

		for(int i=0;i<n;i++) {
			result += abs(avg-a[i]);
			//cout << "abs: " << abs(avg-a[i]) << endl;
		}
		//cout << "Result: " << result << endl;
		//cout << "avg: " << avg << endl;
		cout << "Set #" << ++j << endl << "The minimum number of moves is " << result / 2 << "." << endl;
	}
return 0;
}
