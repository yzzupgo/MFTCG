#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int sum=0;
if(l>=0){
for(int i=l+1;i<l+n;i++) sum+=i;
}else if(l<0&&l+n>=0){
for(int i=l;i<l+n;i++) sum+=i;
}else{
for(int i=l;i<l+n-1;i++) sum+=i;
}
cout<<sum<<endl;
}
