#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<cmath>
#include<cstdio>
#include<bitset>
#include<string>
#include<vector>
#include<cstring>
#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;
typedef pair<int ,int> P;
const int INF = 0x3f3f3f3f;
const int MAXN = 1e5+7;
int a[10] = {0,9,0,900,0,90000};
int solve(int n) {
int ans = 0;
if(n>9) {
ans+=9;
if(n<999 && n>99) {
ans += n-99;
return ans;
}
else if(n<=99) return ans;
}
else return n;
ans += 900;
if(n<99999 && n>9999) {
ans += n-9999;
return ans;
}
else if(n<=9999) return ans;
return ans+90000;
}
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
while(cin>>n) {
cout<<solve(n)<<endl;
}
return 0;
}
