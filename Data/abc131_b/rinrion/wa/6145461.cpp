#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin >>n >>l;
int sum=0;
int min=299;
for(int i=1;i<=n;i++){
sum+=l+i-1;
if(abs(l+i-1)<min){
min=l+i-1;
}
}
cout<<sum-min<<endl;
}
