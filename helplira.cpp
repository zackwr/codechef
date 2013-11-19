#include<iostream>
#include<cmath>
using namespace std;
double sq(double x) { return x*x; }

int main()
{
	double n, min = 1000000001, max = -1;
	int imax, imin;
	cin >> n;

	for(int i=0;i<n;i++) {
		double x1, y1, x2, y2, x3, y3, a, b, c, s, t;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

		a = sqrt(abs(sq(y2-y1)) + abs(sq(x2-x1)));
		b = sqrt(abs(sq(y1-y3)) + abs(sq(x1-x3)));
		c = sqrt(abs(sq(y3-y2)) + abs(sq(x3-x2)));
		s = (a+b+c)/2;
		t = sqrt(s*(s-a)*(s-b)*(s-c));

		if(t >= max) {
			max = t;
			imax = i+1;
		}
		if(t <= min) {
			min = t;
			imin = i+1;
		}
	}
	cout << imin << " " << imax << endl;
return 0;
}
