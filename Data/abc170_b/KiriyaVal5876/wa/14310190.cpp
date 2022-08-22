#include <bits/stdc++.h>
using namespace std;
using Graph = vector<vector<int>>;
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
const long long MOD=998244353;
int main(void){
int x,y;
cin>>x>>y;
bool ans=false;
rep(i,x){
int j=x-i;
if(i+j==x && 2*i+4*j==y)
ans=true;
}
if(ans) puts("Yes");
else puts("No");
return 0;
}
