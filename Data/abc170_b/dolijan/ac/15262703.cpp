#include <bits/stdc++.h>
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define fff(i,a,b) for(int (i)=(a);(i)<=(b);i++)
#define pb push_back
#define len(a) (a).length()
#define all(a) (a).begin(),(a).end()
#define sz(a) (a).size()
#define mp make_pair
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
typedef pair<long long ,long long > pll;
typedef unsigned long long ull;
typedef long double ld;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
cout.tie(0);
ll t=1;
int x,y;
cin>>x>>y;
bool moze=false;
for(int i=0;i<=x;i++)
{
int pom=y-i*4;
if(pom>=0 && pom%2==0 && (x-i)*2==pom) moze=true;
}
if(moze) cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
