#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#define rep(i,n) for(int i=0;i<n;i++)
#define reps(i,n) for(int i=1;i<n;i++)
using namespace std;
int main(){
int n,l;
cin>>n>>l;
vector<int> a(n);
rep(i,n){
a[i]=i+l;
}
int min=abs(a[0]);
rep(i,n){
if(min>abs(a[i])){
min=abs(a[i]);
}
}
int sum=0;
rep(i,n){
sum+=a[i];
}
int ans=sum-min;
cout<<ans;
return 0;
}
