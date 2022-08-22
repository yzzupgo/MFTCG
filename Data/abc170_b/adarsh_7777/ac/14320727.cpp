#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <functional>
#define int long long int
#define fr(i,x,y) for(int i=x;i<y;i++)
#define f(n) for(int i=0;i<n;i++)
#define ff(m) for(int j=0;j<m;j++)
#define F(x) for(auto it:x)
#define in insert
#define pb push_back
#define em emplace_back
#define pi pair<int,int>
#define si second
#define fi first
#define endl '\n'
#define vi vector <int>
#define vii vector <pair<int,int>>
#define __s(x) cout<<#x<<"-> "; cout<<"{ ";F(x){cout<<it<<" ";}cout<<" }";cout<<endl;
#define _s(x) cout<<#x<<"-> "<<x<<endl;
#define _sp(x) cout<<#x<<"-> "<<x.fi<<" "<<x.si<<endl;
#define __sp(x) cout<<#x<<"-> "; cout<<"{ "<<endl;F(x){cout<<it.fi<<" "<<it.si<<endl;}cout<<" }";cout<<endl;
#define inf numeric_limits<int > :: max();
#define fit(it,y) for(auto it=y.begin(); it!=y.end();it++)
#define all(x) x.begin(),x.end()
#define FILEIO freopen("/home/adarsh/Desktop/codes/input", "r", stdin);
using namespace __gnu_pbds;
using namespace std;
#define TRACE
#ifdef TRACE
#define _v(...) __f(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
cout << name << " : " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
const char* comma = strchr(names + 1, ',');cout.write(names, comma - names) << " : " << arg1<<" | ";__f(comma+1, args...);
}
#else
#define _v(...)
#endif
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> rb;
void print(int a[],int n){f(n){cout<<a[i]<<" ";}cout<<endl;}
int m(int x){return x%1000000007;}
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int p(int a,int b){if(b==0)return 1;int t=(p(a,b/2)); if(b%2==0)return (t*t); else return ((a)*(t*t)); }
signed main(){
#ifndef ONLINE_JUDGE
FILEIO
#endif
cin.tie(0); cout.tie(0); ios_base::sync_with_stdio(false);
int x, y;
cin>>x>>y;
if(y>=(2*x) && y<=(4*x) && y%2==0){
cout<<"Yes"<<endl;
}
else{
cout <<"No"<<endl;
}
return 0;
}
