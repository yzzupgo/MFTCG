#include<iostream>
using namespace std;
int main(){
long long n,l,ans=0;
cin>>n>>l;
if(l>=0){
for(int i=1;i<n;i++) ans+=(i+l);
}
else if(l+n>=0){
for(int i=0;i<n;i++) ans+=(i+l);
}
else{
for(int i=0;i<n-1;i++) ans+=(i+l);
}
cout<<ans<<endl;
}
