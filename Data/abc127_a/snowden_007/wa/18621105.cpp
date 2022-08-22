#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vi vector<int>
#define si set<int>
#define mii map<int,int>
#define pb push_back
#define pf push_front
#define PI acos(-1)
#define pii pair<int,int>
#define extract_word(s) stringstream str(s); while(str>>word)
#define fastio ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define SET(s) cout<<fixed<<setprecision(s)
#define set0(a) memset(a,0,sizeof(a))
#define endl "\n"
#define all(a) a.begin(),a.end()
#define rall(a) a.rbegin(),a.rend()
#define lower_string(s) transform(all(s),s.begin(),::tolower)
#define upper_string(s) transform(all(s),s.begin(),::toupper)
#define size(s) (int)s.size()
template<typename T,typename U>
bool compare(T x,U y){return(abs(x-y)<=1e-9);}
const int MOD=1e9+7;
void solve()
{
int a,b;
cin>>a>>b;
if(b<=5)
{
cout<<0;
return ;
}
if(b>=6&&b<=12)
cout<<b/2;
else
cout<<b;
}
int main()
{
fastio
int t;
t=1;while(t--)
{
solve();
cout<<endl;
}
}
