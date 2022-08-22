#include <bits/stdc++.h>
using namespace std;
int main(){
int n,l;
cin >>n >>l;
int sum=0;
int minabs=299;
int min=0;
for(int i=1;i<=n;i++){
sum+=l+i-1;
if(abs(l+i-1)<minabs){
min=l+i-1;
minabs=abs(l+i-1);
}
}
cout<<sum-min<<endl;
}
