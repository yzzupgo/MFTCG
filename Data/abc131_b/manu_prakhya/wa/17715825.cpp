#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int n, l,sum=0;
cin >> n >> l;
vector<int> v(n);
for(int i=0;i<n;i++){
v[i]=l+i-1;
sum+=v[i];
if(i!=0){
if(v[i-1]<v[i]){
v[i]=v[i-1];
}
}
}
cout << sum-v[n-1];
}
