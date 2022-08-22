#include<iostream>
#include<cmath>
using namespace std;
template<class T> inline bool chmax(T &a, T b) {
if(a < b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmin(T &a, T b) {
if(a > b) {
a = b;
return true;
}
return false;
}
#define rep(i,n) for(int i = 0; i < (n); ++i)
const int INF = 2e9;
int main() {
int n;
cin >> n;
int f = floor(1.08 * n);
if(f < 206) {
cout << "Yay!\n" << endl;
} else if(f == 206) {
cout << "so-so!\n" << endl;
} else {
cout << ":(\n" << endl;
}
return 0;
}
