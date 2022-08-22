#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<iomanip>
#include<vector>
#include<numeric>
using namespace std;
using lint = long long;
#define PI acos(-1)
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
int main(){
int n;cin>>n;
int ans=0;
for(int i=1;i<=n;i++){
int tmp=i,cnt=0;
while(tmp>0){
cnt++;
tmp/=10;
}
if(cnt%2!=0)ans++;
}
cout<<ans<<endl;
return 0;
}
