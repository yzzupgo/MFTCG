#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
using Graph = vector<vector<ll>>;
using P = pair<int,int>;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
#define MOD 1000000007
#define INF 1000000
#define PI 3.14159265358979323846264338327950L
#define MAX_N 200010
#define lb lower_bound
int main()
{
int x,y;cin>>x>>y;
for (int a=0;a<100;a++)
{
for (int b=0;b<100;b++)
{
if (2*a+4*b==y && a+b==x){
cout<<"Yes"<<endl;
return (0);
}
}
}
cout<<"No"<<endl;
}
