#include <bits/stdc++.h>
using namespace std;
using ll = long long;
template <class T> using vec = vector<T>;
template <class T> using vvec = vector<vec<T>>;
template<class T> bool chmin(T &a, T b) {
if(a > b) {
a = b;
return true;
}
return false;
}
template<class T> bool chmax(T &a, T b) {
if(a < b) {
a = b;
return true;
}
return false;
}
#define rep(i,n) for(int i=0;i<(n);i++)
#define drep(i,n) for(int i=(n)-1;i>=0;i--)
template<class T> void print(vec<T> &v) {
rep(i, v.size()) cout << v[i] << (i + 1 != (int) v.size() ? " " : "\n");
}
#define all(x) (x).begin(),(x).end()
#define debug(x) cerr << #x << " = " << (x) << endl;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int N;
cin >> N;
int res = floor(1.08 * N);
if(res == 206) {
cout << "so-so\n";
} else {
cout << (res < 206 ? "Yay!" : ":(") << "\n";
}
}
