#include<bits/stdc++.h>
using namespace std;
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef vector<pii> vpii;
template<typename T>
void vec_cin(vector<T> &v, int n) {
for(int i = 0; i < n; i++) {
T buff;
cin >> buff;
v.push_back(buff);
}
}
template<typename T>
void print_vec(vector<T> v) {
for(auto x : v) {
cout << x << " ";
}
cout << endl;
}
unordered_map<string, int> dp;
int32_t main() {
IOS;
long double ans = 1.0;
int n;
cin >> n;
ans = 1.08 * ((long double)n);
int ans_f = ans;
if(ans_f == 206) {
cout << "so-so";
} else if(ans_f < 206) {
cout << "YaY!";
} else {
cout << ":(";
}
return 0;
}
