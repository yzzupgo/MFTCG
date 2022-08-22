#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define pf push_front
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define mp make_pair
#define fi first
#define se second
typedef pair<int,int> pint;
#define All(s) s.begin(),s.end()
#define rAll(s) s.rbegin(),s.rend()
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep(i,n) REP(i,0,n)
double pi = 3.141592653589793;
ll mod = 1000000007;
ll INF = 1000000001;
int intmax = 2147483647;
int intmin = -2147483648;
ll llmax = 9223372036854775807;
ll llmin = -9223372036854775807;
int main(){
int a,b;
cin>>a>>b;
if (a>=13){
cout<<b<<endl;
}
else if (a<=5){
cout<<0<<endl;
}
else{
cout<<b/2<<endl;
}
return 0;
}
