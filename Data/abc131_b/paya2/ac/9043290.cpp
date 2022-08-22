#include<iostream>
#include<vector>
#include <cmath>
#include <algorithm>
using namespace std;
int main(void){
int N,L;
cin>>N>>L;
vector<int> a(N,0);
vector<int> c(N,0);
for(int i=0;i<N;i++){
a[i]=abs(L+i);
c[i]=L+i;
}
int count=300;
int b;
for(int j=0;j<N;j++){
if(a[j]<=count){
count=a[j];
b=j;
}
}
int ans=0;
for(int k=0;k<N;k++){
if(k!=b){
ans+=c[k];
}
}
cout<<ans<<endl;
return 0;
}
