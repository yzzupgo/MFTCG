#include <bits/stdc++.h>
using namespace std;
#define endl "\n"
#define f first
#define s second
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<b;i++)
typedef long long ll;
const int MAXN=1e6;
int arr[MAXN];
bool vis[MAXN];
ll mod=1e9+7;
int main(){
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int a,b;
cin>>a>>b;
if (a>=13) cout<<"B";
else if (a<=12 and a>=6) cout<<b/2;
else cout<<0;
}
