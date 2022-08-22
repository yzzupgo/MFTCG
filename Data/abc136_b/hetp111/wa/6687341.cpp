#include <bits/stdc++.h>
using namespace std;
#define int long long
#define double long double
#define all(v) (v).begin(),(v).end()
#define vi vector<int>
#define pii pair<int,int>
#define prec(n) fixed<<setprecision(n)
#define MOD 1000000007
#define eps 1e-8
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
template<class A, class B> ostream& operator<<(ostream& out, const pair<A, B> &a){
return out<<"("<<a.first<<","<<a.second<<")";}
template<class A> ostream& operator<<(ostream& out, const vector<A> &a){
out<<"";for(auto it=a.begin();it!=a.end();it++){if(it!=a.begin())out<<" ";out<<*it;}out<<"";
return out;}
template<class A, class B> istream& operator>>(istream& in, pair<A,B> &a){in>>a.first>>a.second;return in;}
template<class A> istream& operator>>(istream& in, vector<A> &a){for(A &i:a)in>>i;return in;}
int f(int n){
int ans=0;
while(n){
n=n/10;
ans++;
}
if(ans&1)
return ans;
return 0;
}
signed main(){
FASTER;
int n,ans=0;cin>>n;
for(int i=1;i<=n;i++){
ans+=f(i);
}
cout<<ans;
}
