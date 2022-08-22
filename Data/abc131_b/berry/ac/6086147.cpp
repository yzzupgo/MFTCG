#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
int n, l, su, tmp, ab=999999, ans;
vector<int> v;
cin>> n >> l;
su=n*(n+1)/2+n*(l-1);
v.resize(n+1);
for(int i=1;i<=n;i++){
tmp=0;
for(int j=1;j<=n;j++){
if(i==j) continue;
tmp+=l+j-1;
}
if(abs(su-tmp)<ab){
ab=abs(su-tmp);
ans=tmp;
}
}
cout<< ans << endl;
}
