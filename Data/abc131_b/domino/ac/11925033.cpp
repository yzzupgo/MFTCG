#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<map>
#include<string.h>
#include<complex>
#include<math.h>
#include<queue>
#include <functional>
#include<time.h>
#include <stack>
#include<iomanip>
using namespace std;
#define rep(i,a,n) for(int i=(a);i<(n);i++)
#define ll long long
#define llint long long int
#define sort(s) sort(s.begin(),s.end())
#define reverse(v) reverse(v.begin(), v.end());
#define Yes(ans) if(ans)cout<<"Yes"<<endl; else cout<<"No"<<endl;
#define YES(ans) if(ans)cout<<"YES"<<endl; else cout<<"NO"<<endl;
#define hei(a) vector<a>
#define whei(a) vector<vector<a>>
#define UF UnionFind
#define rt (a); return (a);
#define Pint pair<int,int>
#define keta(a) fixed << setprecision(a)
constexpr auto INF = 1000000000;
constexpr auto mod = 1000000007;
int gcd(int a, int b) {
if (b > a)swap(a, b);
if (a % b == 0)return b;
return gcd(b, a % b);
}
int ans = 0;
int s[10][10];
int k[10];
int p[10];
void bit(int m, int n,int d) {
stack<string> st;
st.push("");
while (!st.empty()) {
string now = st.top();
st.pop();
if (now.size() == n) {
bool w = true;
rep(i, 0,d ) {
int x = 0;
rep(j, 0, k[i])if (now[s[i][j] - 1] == '1')x++;
if (x%2 != p[i])w = false;
}
if(w)ans += 1;
}
else {
for (int i = m - 1; i >= 0; i--) {
string next = now + to_string(i);
st.push(next);
}
}
}
}
;
int main() {
int n, l;
cin >> n>>l;
int M = 10000;
int I,sum=0;
rep(i, 0, n) {
sum += i + l;
if (abs(M) > abs(i + l))M = i + l;
}
int ans = sum - M;
cout << ans << endl;
return 0;
}
