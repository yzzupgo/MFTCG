#include <bits/stdc++.h>
using namespace std;
#define int long long int
#define all(i) i.begin(), i.end()
#define sz(a) (int)a.size()
const int dx4[4] = {0, 1, 0, -1};
const int dy4[4] = {-1, 0, 1, 0};
const int dx8[8] = {-1, -1, -1, 0, 1, 1, 1, 0};
const int dy8[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
#define XOX
vector<string> vec_splitter(string s) {
for(char& c: s) c = c == ','? ' ': c;
stringstream ss; ss << s;
vector<string> res;
for(string z; ss >> z; res.push_back(z));
return res;
}
void debug_out(vector<string> __attribute__ ((unused)) args, __attribute__ ((unused)) int idx) { cerr << endl; }
template <typename Head, typename... Tail>
void debug_out(vector<string> args, int idx, Head H, Tail... T) {
if(idx > 0) cerr << ", ";
stringstream ss; ss << H;
cerr << args[idx] << " = " << ss.str();
debug_out(args, idx + 1, T...);
}
#ifdef XOX
#define debug(...) debug_out(vec_splitter(#__VA_ARGS__), 0, __VA_ARGS__)
#else
#define debug(...) 42
#endif
void solve(){
int x, y; cin >> x >> y;
for(int a = 0; a <= 100; ++a){
for(int b = 0; b <= 100; ++b){
if(a * 4 + b * 2 == y and a + b == x){
cout << "Yes\n";
return;
}
}
}
cout << "No\n";
}
int32_t main(){
ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
int T = 1;
for(int i = 1; i <= T; ++i){
solve();
}
return 0;
}
