#include<bits/stdc++.h>
using namespace std;
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
#define sz(x) int(x.size())
int main(){
int n;
cin>>n;
if(n=100000){
cout<<90909<<endl;
}
else if (n>=10000){
cout<<(n-10000+1)+909<<endl;
}
else if(n>999){
cout<<909<<endl;
}
else if(n>=100){
cout<<(n-100+1)+9<<endl;
}
else if(n>9){
cout<<9<<endl;
}
else{
cout<<n<<endl;
}
return 0;
}
