#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
#define rep(i,n) for (int i = 0; i < (int)(n); ++i)
#define rep1(i,n) for (int i = 1; i <= (int)(n); ++i)
#define rep11(i,n) for (int i = 1; i < (int)(n); ++i)
#define repo(i,o,n) for (int i = o; i < (int)(n); ++i)
#define repm(i,n) for (int i = (int)(n)-1; i >= 0; --i)
#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()
#define pb(n) push_back(n)
#define mp make_pair
#define MOD 1002000007
#define INF LONG_LONG_MAX
int main(){
int A,B;
cin >>A>>B;
if (A<6){
cout << 0 <<endl;
}
else if (A<13){
cout << (B)/2 <<endl;
}
else cout << B <<endl;
}
