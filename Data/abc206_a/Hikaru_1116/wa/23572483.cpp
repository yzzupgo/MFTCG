#include <bits/stdc++.h>
using namespace std;
#define rep(i,j,n) for (int i = j; i < (n); i++)
#define ll long long
using P = pair<int, int>;
template<class T>bool chmax(T &a, const T &b) {
if(a < b) {
a = b;
return 1;
}
return 0;
}
template<class T>bool chmin(T &a, const T &b) {
if(b < a) {
a = b;
return 1;
}
return 0;
}
const ll INF = 10e9;
int main(void) {
int n;
cin >> n;
float ans = n * 1.08;
float tmp = 206;
if(tmp > ans) {
cout << "Yay!" << endl;
} else if(tmp < ans) {
cout << ":( " << endl;
} else {
cout << "so-so" << endl;
}
return 0;
}
