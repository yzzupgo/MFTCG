#include<bits/stdc++.h>
using namespace std;
#define M 200005
#define MOD 1000000007
#define PI 3.14159265358979323846
#define ep emplace_back
#define mk make_pair
#define all(v) (v).begin(),(v).end()
#define rall(v) (v).rbegin(),(v).rend()
typedef long long int lli;
typedef unsigned long long int ulli;
typedef pair<int,int> PII;
typedef pair<lli,lli> PLL;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int x,y;
cin>>x>>y;
if(y>4*x)
cout<<"No\n";
else
{
if(y%2==1)
cout<<"No\n";
else
cout<<"Yes\n";
}
}
