#include<bits/stdc++.h>
#define ll long long
#define db long double
#define fi first
#define se second
#define pb push_back
#define pob pop_back
#define W while
#define fn(i,x) for(int i=0;i<x;i++)
#define fs(i,s,x) for(int i=s;i<x;i++)
#define fr(i,x) for(int i=x;i>=0;i--)
#define fit(it,s) for(auto it=s.begin();it!=s.end();it++)
#define mp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vii vector<int>
#define vll vector<ll>
#define mod 1000000007
#define MAX 1005
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll a,b;
cin >> a >> b;
if(a >= 13)cout << b;
else if(a>=6 and a<=12) cout << b/2;
else cout <<"0";
return 0;
}
