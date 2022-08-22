#include <bits/stdc++.h>

using namespace std;

int main() {

    int a,b,c,d,e;
    int sa,sb,sc,sd,se,mins;
    cin >> a >> b >> c >> d >> e;

	sa = a%10; mins = sa;
	sb = b%10; mins = ( sb<mins ? sb : mins );
	sc = c%10; mins = ( sc<mins ? sc : mins );
	sd = d%10; mins = ( sd<mins ? sd : mins );
	se = e%10; mins = ( se<mins ? se : mins );
	a /= 10; a *= 10;
	b /= 10; b *= 10;
	c /= 10; c *= 10;
	d /= 10; d *= 10;
	e /= 10; e *= 10;
	
	cout << (a+b+c+d+e) - (10-mins) << endl;

    return 0;
}
