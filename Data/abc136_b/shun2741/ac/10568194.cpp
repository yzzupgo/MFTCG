#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
#define REP(i,n) for(ll i=0; i<(ll)(n); ++i)
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;
using Graph = vector<vector<int>>;
template<typename A, size_t N, typename T>
void Fill(A (&array)[N], const T &val){
std::fill( (T*)array, (T*)(array+N), val );
}
int main()
{
int N;
cin >> N;
int ans = 0;
for(int i=1; i<=N; i++){
if(to_string(i).length() % 2 == 1) ans++;
}
cout << ans << endl;
return 0;
}
