#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)(n); i++)
int main(){
int n,l;
cin>>n>>l;
int sum=0;
if(l>=0){
cout<<((l+l+n-1)*n/2)-l<<endl;
return 0;
}
if(l+n-1<0){
cout<<((l+l+n-1)*n/2)-(l+n-1)<<endl;
return 0;
}
sum+=((l+l+n-1)*n/2);
cout<<sum<<endl;
}
