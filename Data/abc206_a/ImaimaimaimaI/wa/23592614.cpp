#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define INF32 2147483647
const long long INF = 1LL << 60;
template<class T> bool chmax(T &a, const T &b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template<class T> bool chmin(T &a, const T &b) {
if(b < a) {
a = b;
return 1;
}
return 0;
}
int main() {
int N;
cin >> N;
cout << floor(N * 1.08) << endl;
if(floor(N * 1.08) < 206) {
cout << "Yay!" << endl;
} else if(floor(N * 1.08) == 206) {
cout << "so-so" << endl;
} else if(206 < floor(N * 1.08)) {
cout << ":(" << endl;
}
return 0;
}
