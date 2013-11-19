#include<iostream>
using namespace std;

int main()
{
	int t, h1, h2, m1, m2, s1, s2, meters;
	cin >> t;

	while(t--) {
		cin >> h1 >> m1 >> s1;
		cin >> h2 >> m2 >> s2;
		h2 -= h1;
		m2 -= m1;
		s2 -= s1;
		meters = s2 + (m2 * 60) + (h2 * 60 * 60);
		meters %= 400;
		if((meters < 100) || (meters < 300 && meters > 199))
			cout << "S" << endl;
		else
			cout << "C" << endl;
	}
return 0;
}
