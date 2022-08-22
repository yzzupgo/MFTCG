#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i,srt,end) for (long long i = (srt); i < (long long)(end); i++)
#define VL vector<ll>
#define VS vector<string>
#define VB vector<bool>
#define VP vector<pair<ll,ll>>
#define VVL vector<vector<ll>>
#define VVP vector<vector<pair<ll,ll>>>
#define PL pair<ll,ll>
#define ALL(v) (v).begin(), (v).end()
ll MOD=1000000007;
ll mod=998244353;
int inf=1000001000;
ll INF=1e18+5;
int main(){
ll X, Y;
cin >> X >> Y;
bool flg=false;
rep(i,1,X+1){
ll ans=i*2+(X-i)*4;
if(Y==ans)flg=true;
}
cout << (flg ? "Yes":"No") << endl;
return 0;
}
