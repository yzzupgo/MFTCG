#include <bits/stdc++.h>
using namespace std;
#define fv first
#define sv second
#define ll long long
#define pll pair <ll,ll>
#define pii pair <int,int>
#define mp(a,b) make_pair(a,b)
#define READ(x) freopen(x,"r",stdin)
#define WRITE(x) freopen(x,"w",stdout)
#define Add(a,b,m) (a % m + b % m ) % m
#define Mul(a,b,m) (a % m * b % m ) % m
#define isWorking() cout<<"Wroking"<<endl
#define all(x) (x).begin(),(x).end()
#define allr(x) (x).rbegin(),(x).rend()
#define PRINT(ok) cout << (ok? "YES":"NO") << endl
#define DoublePrint(x,a) cout<<fixed<<setprecision(x)<<a<<endl
#define Make_Slow() ios_base :: sync_with_stdio(0),cin.tie(0);
const int fx[]= {+1,-1,+0,+0}, fy[]= {+0,+0,+1,-1};
const ll mod = 1e9+7, INF = 1e18, mx = 1e6;
int Case = 1, cas = 0;
int C(int n){
int cnt = 0;
while(n){
cnt++;
n/=10;
}
return cnt;
}
int main(){
Make_Slow();
int a, b, c;
while(cin >> a ){
b = 0;
for(int i = 1; i <= a; i++){
if( C(i)&1 ) b++;
}
cout << b << endl;
}
return 0;
}
