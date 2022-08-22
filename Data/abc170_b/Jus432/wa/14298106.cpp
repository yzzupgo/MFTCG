#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for (int i = 0; i < n; i++)
using ll = long long;
int main(){
int x, y;
cin >> x >> y;
rep(i, x+1) {
int c = i;
int t = x - i;
if (2*c + 4*t == y) {
cout << "Yes" << endl;
return 0;
}
cout << "No" << endl;
}
}
