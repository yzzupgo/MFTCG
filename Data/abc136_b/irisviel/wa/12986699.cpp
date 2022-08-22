#include <bits/stdc++.h>
#define FOR(i,n) for(ll i = 0; i < n; i++)
#define FORR(i,n) for(ll i = n; i >= 0; i--)
#define FORS(i,m,n) for(int i = m;i < n;i++)
#define ALL(v) accumulate(v.begin(),v.end(),0)
#define SORT(v) sort(v.begin(),v.end())
#define OUT(n) (cout << n << endl)
#define IN1(a) (cin >> a)
#define IN2(a,b) (cin >> a >> b)
#define IN3(a,b,c) (cin >> a >> b >> c)
#define IN4(a,b,c,d) (cin >> a >> b >> c >> d)
using namespace std;
typedef long long ll;
int main(){
ll n,ans;
string ss;
IN1(n);
FORS(i,1,n+1){
ss = to_string(i);
if ((ss.size()) % 2 == 1)
{
ans++;
}
}
OUT(ans);
}
