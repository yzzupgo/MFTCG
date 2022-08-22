#include<iostream>
#include<vector>
using namespace std;
int main(){
#ifndef ONLINE_JUDGE
freopen("input.txt","r",stdin);
freopen("output.txt","w",stdout);
#endif
int n,k;
cin>>n>>k;
if(k%2){
cout<<"NO"<<endl;
return 0;
}
if(k>=(2*n) && k<=(4*n)){
cout<<"YES"<<endl;
}
}
