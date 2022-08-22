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
int main(){
ios::sync_with_stdio(0);
cin.tie(0);
int n;
while(cin>>n) {
int m = n;
int len = 0;
while(m) {
m/=10;
len++;
}
int ans = 0;
for(int i=0;i<len;++i)
ans += a[i];
if(len==1) ans += n;
else if(len%2) ans += n-(int)pow(10,len-1);
cout<<ans<<endl;
}
return 0;
}
