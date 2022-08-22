#include<iostream>
using namespace std;
int main(){
int n,l,ans=0;
cin>>n>>l;
if(l>=0){
ans=(2*l+n)*(n-1)/2;
}
else if(l+n>=0){
ans=(2*l+n-1)*n/2;
}
else{
ans=(2*l+n-2)*(n-1)/2;
}
cout<<ans<<endl;
}
