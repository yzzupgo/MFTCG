#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ull unsigned int
#define ld long double
#define pb push_back
#define pa pair<int,int>
#define ppa pair<pair<int,int>,int>
#define pap pair<int,pair<int,int>>
#define v1d vector<int>
#define v2d vector<vector<int> >
#define vpa vector<pair<int,int>>
#define M 1000000007
#define MN LLONG_MIN
#define MX LLONG_MAX
#define ff first
#define ss second
#define endl "\n"
#define v1s vector<string>
#define all(v) v.begin(),v.end()
#define S(v) sort(v.begin(),v.end())
#define RS(v) sort(v.rbegin(),v.rend())
#define R(v) reverse(v.begin(),v.end())
#define mxpq(T) priority_queue <T>
#define mnpq(T) priority_queue<T,vector<T>,greater<T>>
#define T int tc;cin>>tc;while(tc--)
#define p2d(v) for(auto a:v){for(auto b:a)cout<<b<<" ";cout<<endl;}
#define p1d(v) for(auto a:v)cout<<a<<" ";cout<<endl;
#define ppd(v) for(auto a:v)cout<<a.ff<<" "<<a.ss<<endl;
#define forIloop(i,n) for(auto i=0;i<n;i++);
#define forDloop(i,n) for(auto i=n-1;i>=0;i--);
#define qqq 400005
const int MOD = 1e9 + 7;
void codeChef(){
int x,y; cin>>x>>y;
while(x--){
if(y > 4){
y-=4;
}
else if(y>=2 && y <=4){
y-=2;
}
if(y <= 0){
break;
}
}
if(x>0 || y>0){
cout << "NO" << endl;
return;
}
cout << "YES" << endl;
return;
}
int32_t main(){
cout<<fixed<<setprecision(16);
cin.sync_with_stdio(false);
cin.tie(0);cout.tie(0);
codeChef();
return 0;
}
