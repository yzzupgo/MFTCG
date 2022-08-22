#include<bits/stdc++.h>
using namespace std;
#define FOR(i,n) for(int i=0; i<n; ++i)
#define FORR(i,a,n) for(int i=a; i<n; ++i)
#define ALL(c) (c).begin(), (c).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define UNIQ(c) (c).erase(unique(ALL((c))), end((c)))
const int INF = 0x3f3f3f3f;
typedef long long ll;
typedef vector<int> VI;
typedef vector<ll> VL;
typedef vector<VI> VVI;
typedef vector<VL> VVL;
typedef vector<string> VS;
typedef pair<int,int> PI;
typedef pair<ll,ll> PL;
int main(void){
std::ios_base::sync_with_stdio(false);
cin.tie(0);
int x,y;
cin >> x >> y;
int b = (y - 2*x)/2;
int a = (4*x - y)/2;
if((a + b) == x){
cout << "Yes";
} else {
cout << "No";
}
return 0;
}
