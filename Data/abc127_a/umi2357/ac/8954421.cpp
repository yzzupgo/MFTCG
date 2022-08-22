#include<bits/stdc++.h>
#define rep(k,i,n) for(long long i=k;i<n;++i)
using namespace std;
typedef long long ll;
int main(void){
ll A,B;
cin>>A>>B;
if(A>=13){
cout<<B<<endl;
}else if(6<=A){
cout<<B/2<<endl;
}else{
cout<<0<<endl;
}
}
