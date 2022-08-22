#include <bits/stdc++.h>
using namespace std;
const int64_t INF=9999999999999999;
int main() {
int N,L;
cin>>N>>L;
int sum=0;
int ans=9999;
for(int i=L;i<=L+N-1;i++){
sum+=i;
if(abs(i)<abs(ans)){ans=i;}
}
cout<<sum-ans<<endl;
return 0;}
