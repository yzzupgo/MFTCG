#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define P pair<int,int>
#define F first
#define S second
#define vi vector<int>
#define vc vector<char>
#define vb vector<bool>
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define mp(a,b) make_pair(a, b)
#define min3(a,b,c) min(min(a, b), c)
#define min4(a,b,c,d) min(min(a, b), min(c, d))
#define max3(a,b,c) max(max(a, b), c)
#define max4(a,b,c,d) max(max(a, b), max(c, d))
#define fill(arr,val) memset(arr,val,sizeof(arr))
#define db(x) cout<<#x<<" : "<<x<<endl
const int N = 1000000007;
void solve(){
int n,k,b,c, ans=0, count=0, sum=0;
cin>>n>>k;
if(k&1){
cout<<"No\n";
return;
}
if(k/2 < n){
cout<<"No\n";
return;
}
cout<<"Yes\n";
}
int32_t main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL); cout.tie(NULL);
{
solve();
}
return 0;
}
