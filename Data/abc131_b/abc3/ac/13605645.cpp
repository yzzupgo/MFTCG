#include <bits/stdc++.h>
using namespace std;
const int64_t INF=9999999999999999;
int main() {
int N,L;
cin>>N>>L;
int sum=0;
for(int i=L;i<=L+N-1;i++){
sum+=i;
}
int ans=99999;int k=0;
for(int i=L;i<=L+N-1;i++){
if(abs(sum-(sum-i))<=ans){ans=min(abs(sum-(sum-i)),ans);k=sum-i;}
}
cout<<k<<endl;
return 0;
}
