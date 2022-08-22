#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(int)(n);(i)++)
#define REP(i,n) for(int (i)=0;(i)<=(int)(n);(i)++)
#define rep1(i,x,n) for(int (i)=(x);(i)<(int)(n);(i)++)
#define REP1(i,x,n) for(int (i)=(x);(i)<=(int)(n);(i)++)
#define rrep(i,x) for(int i=((int)(x)-1);i>=0;i--)
using namespace std;
using ll = long long;
using ull = unsigned long long;
using Int = long long;
const int MOD = 1000000007;
const ll INF = numeric_limits<ll>::max();
const int inf = 1e8;
typedef pair<int,int> P;
typedef std::priority_queue<int> IntPrioQueue;
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue;
int main(){
cin.tie( 0 ); ios::sync_with_stdio( false );
int x,y;
cin >> x >> y;
bool flag = false;
REP1(i,1,x){
if(2*i+4*(x-i)==y) flag = true;
}
if(flag) cout << "Yes";
else cout << "No";
return 0;
}
