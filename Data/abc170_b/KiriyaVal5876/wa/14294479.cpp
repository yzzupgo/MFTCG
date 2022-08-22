#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
const long long MOD=998244353;
int main(void){
int x,y;
cin>>x>>y;
if((4*x-y)%2==0 && 4*x-y>=0) puts("Yes");
else puts("No");
return 0;
}
