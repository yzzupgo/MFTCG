#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define SORT(v) sort(v.begin(),v.end())
#define fori(i,a,b) for(ll i=a;i<b;i++)
#define M 1000000007
#define deb(x) cout<< #x << " " << x << endl;
double pi=3.14159265358979323846;
typedef pair<int,int> pii;
typedef pair<long long int, long long int>pll;
typedef vector<int>vi;
typedef vector<long long int>vl;
#define MAXN 10000001
int main ()
{
ll T;
T=1;
while(T--)
{
int x,y;
cin>>x>>y;
int z=(4*x-y);
if(z>=0&&z%2==0)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
}
return 0;
}
