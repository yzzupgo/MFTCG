#include<bits/stdc++.h>
using namespace std;
int main(){
int n,i,l,sum;
cin >> n >> l;
vector<int> ans(n);
sum=0;
for(i=0;i<n;++i){
ans[i]=l+i;
}
sort(ans.begin(),ans.end());
for(i=0;i<n;++i){
if(ans[0]<0 && ans[n-1]>0){
if(ans[i]!=0){
sum=sum+ans[i];
}
}else if(ans[n-1]<0){
if(i!=n-1){
sum=sum+ans[i];
}
}else{
if(i!=0){
sum=sum+ans[i];
}
}
}
cout << sum << endl;
return 0;
}
