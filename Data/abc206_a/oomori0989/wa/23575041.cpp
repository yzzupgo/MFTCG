#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
template<class T> inline bool chmin(T &a, T b) {
if(a > b) {
a = b;
return true;
}
return false;
}
template<class T> inline bool chmax(T &a, T b) {
if(a < b) {
a = b;
return true;
}
return false;
}
const long long INF = 1LL << 60;
int n;
int main() {
cin >> n;
float ans = n * 1.08;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
