#include <bits/stdc++.h>
using namespace std;
int x, y;
int main(){
cin >> x >> y;
int c, t;
t = (y-2*x)/2;
c = x - t;
if(c < 0 or t < 0) cout << "No" << endl;
else cout << "Yes" << endl;
}
