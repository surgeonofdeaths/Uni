#include <iostream>
#include <cmath>

using namespace std;

double calcK(double p, double t) {
	double k = sqrt(p + pow(t, 2));
	return k;
}

double calcX(double p, double k) {
	double x = p + k;
	return x;
}

double calcY(double x) {
	double y = pow(atan(pow(x, 2)), 3);
	return y;
}

int main() {
	double p, t, y, x, k;

	cout << "p = ";
	cin >> p;

	cout << "t = ";
	cin >> t;

	k = calcK(p, t);
	x = calcX(p, k);
	y = calcY(x);
	
	cout << "\n";
	cout << "k = " << k << endl;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	return 0;
}