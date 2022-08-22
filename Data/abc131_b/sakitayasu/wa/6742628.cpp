#include<iostream>
using namespace std;
int main(){
int n,l,sum=0,m=10000;
cin>>n>>l;
for(int i=0;i<n;i++){
sum += l+i;
m = min(m,abs(l+i));
}
cout<<sum-m<<endl;
return 0;
}
