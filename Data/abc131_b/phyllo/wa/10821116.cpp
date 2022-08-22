#include <bits/stdc++.h>
using namespace std;
#define REP(i,a,n) for(int i=(a); i<(int)(n); i++)
#define rep(i,n) REP(i,0,n)
#define FOR(it,c) for(__typeof((c).begin()) it=(c).begin(); it!=(c).end(); ++it)
#define ALLOF(c) (c).begin(), (c).end()
typedef long long ll;
typedef unsigned long long ull;
int main(){
int N, L;
cin >> N >> L;
int sum = 0;
vector<int> v;
rep(i,N){
v.push_back(L+i);
sum += L+i;
}
int ret = sum;
int ret_s = -1;
rep(i,N){
int s = 0;
rep(j,N){
if(i==j) continue;
s += v[j];
}
if(ret > abs(sum-s)){
ret = abs(sum-s);
ret_s = s;
}
}
cout << ret_s << endl;
return 0;
}
