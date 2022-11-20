#include<iostream>
using namespace std;
unsigned long long a[4] = { 0,1,1,2 }, ans[4] = { 1,0,0,1 }, p = 32764;
void f(unsigned long long x[], unsigned long long y[]) {
	long long a, b, c, d, e, f, g, h, i, j, k, l;
	a = x[0], b = x[1], c = x[2], d = x[3], e = y[0], f = y[1], g = y[2], h = y[3];
	i = (a * e % p + b * g % p) % p;
	j = (a * f % p + b * h % p) % p;
	k = (c * e % p + d * g % p) % p;
	l = (c * f % p + d * h % p) % p;
	x[0] = i;
	x[1] = j;
	x[2] = k;
	x[3] = l;
}
int main() {

	cout << dec<<double(2e13);

}