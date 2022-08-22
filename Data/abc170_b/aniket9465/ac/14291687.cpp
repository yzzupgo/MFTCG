#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define VV vector
#define pb push_back
#define bitc __builtin_popcountll
#define m_p make_pair
#define infi 1e18+1
#define eps 0.000000000001
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
string char_to_str(char c){string tem(1,c);return tem;}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
template<class T>
T rand() {
return uniform_int_distribution<T>()(rng);
}
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> oset;
auto clk=clock();
#define all(x) x.begin(),x.end()
#define S second
#define F first
#define sz(x) ((long long)x.size())
#define int long long
#define f80 __float128
#define pii pair<int,int>
signed main()
{
fastio;
#ifdef ANIKET_GOYAL
freopen("inputf.in","r",stdin);
freopen("outputf.in","w",stdout);
#endif
int x,y;
cin>>x>>y;
for(int i=0;i<=100;++i){
for(int j=0;j<=100;++j)
{
if(i+j==x&&i*2+j*4==y){
cout<<"Yes";
return 0;
}
}
}
cout<<"No";
#ifdef ANIKET_GOYAL
#endif
}
