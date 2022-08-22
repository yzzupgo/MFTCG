#include <bits/stdc++.h>
#define rep(i,n) for(int i=(0);i<(n);i++)
using namespace std;
typedef long long ll;
template<class T> bool chmax(T &a, const T &b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template<class T> bool chmin(T &a, const T &b) {
if(a > b) {
a = b;
return 1;
}
return 0;
}
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int n;
cin >> n;
int p = n * 108 / 100;
if(p < 206) {
cout << "Yay!" << endl;
} else if(p == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
