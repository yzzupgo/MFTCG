#include <iostream>
using namespace std;
int main() {
int n;
cin >> n;
int l;
cin >> l;
int total;
if (l >= 0) total = (n-1)*(2*l+n)/2;
else if (l <= 0 && (n+l-1)>=0) total = n*(2*l+n-1)/2;
else total = (n-1)*(2*l+n-2)/2;
cout << total << endl;
}
