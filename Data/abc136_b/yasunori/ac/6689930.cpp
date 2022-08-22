#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
int main() {
int n;
cin >> n;
if(n < 10)
cout << n << endl;
else if(n < 100)
cout << 9 << endl;
else if(n < 1000)
cout << 9+(n-99) << endl;
else if(n < 10000)
cout << 9+900 << endl;
else if(n < 100000)
cout << 9+900+n-9999;
else
cout << 90909 << endl;
}
