#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
#define rrep(i,n) for (int i=(int)(n)-1; i>=0; --i)
#define debug(x) cerr << #x << " = " << x << "\n"
#define debugv(x) rep(i, x.size()) cerr << x[i] << (i == x.size() - 1 ? "\n" : " ")
#define all(x) x.begin(),x.end()
#define int long long
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
const int INF = ((1LL << 30) + (1LL << 29));
const int MOD = 1000000007;
int N,M,K;
string S,T;
vector<int> A;
vector<int> B;
void input()
{
cin>>N>>M;
}
void func(){}
void solve()
{
cout<<max({M*N, M-N, M+N})<<endl;
}
signed main()
{
input();
solve();
return 0;
}
