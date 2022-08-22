#include <bits/stdc++.h>
using namespace std;
int x, y;
int main(){
cin >> x >> y;
int c, t;
t = (y-2*x)/2;
c = x - t;
if(c < 0 or t < 0 or (c+t != x) or (4*t + 2*c != y)) cout << "No" << endl;
else cout << "Yes" << endl;
}
