#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
int x, y;
cin >> x >> y;
int t = (y-2*x)/2;
if(t >= 0 and (x-2*t) >= 0)
cout << "Yes" << endl;
else
cout << "No" << endl;
return 0;
}
