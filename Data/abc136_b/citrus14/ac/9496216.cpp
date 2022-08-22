#include<iostream>
#include<stdio.h>
#include<vector>
#include<algorithm>
#include<set>
#include<string>
#include<string.h>
#include<time.h>
#include<random>
#include<cmath>
#include<math.h>
#include<queue>
#include<time.h>
#include<iomanip>
#include<utility>
#define rt "\n"
#define rep(i,n) for(int i=0;i<n;i++)
#define rop(i,n) for(int i=1;i<=n;i++)
#define drep(i,n) for(int i=n-1;0<=i;i--)
#define yes(ans) if(ans)cout<<"yes"<<rt;else cout<<"no"<<rt;
#define Yes(ans) if(ans)cout<<"Yes"<<rt;else cout<<"No"<<rt;
#define YES(ans) if(ans)cout<<"YES"<<rt;else cout<<"NO"<<rt;
#define sort(s) sort(s.begin(),s.end())
#define reve(s) reverse(s.begin(),s.end())
#define asas int ans=0
#define cncn int cnt=0
#define please return
#define AC 0
using namespace std;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef vector<char> vcha;
typedef long long int llint;
typedef pair<int, int> pint;
typedef pair<llint, llint> pllint;
typedef vector<llint> vllint;
typedef vector<pint> vpint;
typedef vector<pair<llint, llint>> vpllint;
typedef vector<vector<int>> vvint;
typedef vector<vector<llint>> vvllint;
typedef vector<vector<pint>> vvpint;
typedef vector<bool> vbool;
long long GCD(long long a, long long b) {
if (b == 0) return a;
else return GCD(b, a % b);
}
int main(void) {
int n;
cin >> n;
asas;
if (n >= 10000) {
if (n >= 100000) {
ans += 90000;
}
else ans += n - 9999;
}
if (n >= 100) {
if (n >= 1000) {
ans += 900;
}
else ans += n - 99;
}
if (n > 0) {
if (n >= 10) {
ans += 9;
}
else ans += n;
}
cout << ans << rt;
please AC;
}
