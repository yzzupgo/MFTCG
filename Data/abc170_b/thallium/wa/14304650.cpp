#include<bits/stdc++.h>
#define REP(i,n) for(int i=0, i ##_len=(n); i<i ##_len; ++i)
#define REPS(i,n) for(int i=1, i ##_len=(n); i<i ##_len; ++i)
#define all(x) (x).begin(),(x).end()
using ll = long long;
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }
template<typename A, size_t N, typename T> void Fill(A (&array)[N], const T &val) { std::fill( (T*)array, (T*)(array+N), val ); }
#define INF 1e9
#define PI (acos(-1))
#define mod (int)1e9+7
int main() {
int x,y;
cin>>x>>y;
if((y-2*x)>=0&&(4*x-y)>=0)cout<<"Yes"<<endl;
else cout<<"No"<<endl;
return 0;
}
