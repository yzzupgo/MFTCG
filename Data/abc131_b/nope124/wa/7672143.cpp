#include<bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); i++)
int int_len(int n) {
int s=0;
while(n!=0) s++, n/=10;
return s;
}
int int_sum(int n) {
int m=0,s=0,a=n;
while(a!=0) s++, a/=10;
for(int i=s-1;i>=0;i--) m+=n/((int)pow(10,i))-(n/((int)pow(10,i+1)))*10;
return m;
}
int vec_sum(vector<int> v){
int n=0;
for(int i=0;i<v.size();i++) n+=v[i];
return n;
}
int main() {
int n,l,ans=0;
cin>>n>>l;
vector<int> v(n);
rep(i,n) cin>>v[i],v[i]=l+i,cout<<v[i]<<endl;
rep(i,n) ans+=v[i];
if(v[n-1]<0){
cout<<ans-v[n-1]<<endl;
return 0;
}else if(v[0]>0){
cout<<ans-v[0]<<endl;
return 0;
}else if(v[0]<=0 && v[n-1]>=0){
cout<<ans<<endl;
return 0;
}
}
