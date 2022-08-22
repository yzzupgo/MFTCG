#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> v;
typedef pair<int,int>p;
typedef set<int>s;
#define ll long long
#define fr(i,a,b) for(int i=a;i<b;i++)
#define fre(i,a,b) for(int i=a;i<=b;i++)
#define FOR(i,a,b) for(int i=a;i>b;--i)
#define FORE(i,a,b) for(int i=a;i>=b;--i)
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define ub upper_bound
#define bg begin()
#define en end()
int main()
{ int x,y;
cin>>x>>y;
if(y%2==1){cout<<"No"<<endl; return 0;}
if(2*x<=y&&y<=4*x)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
