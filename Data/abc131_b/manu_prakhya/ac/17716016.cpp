#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
int n, l,sum=0;
cin >> n >> l;
vector<int> v(n);
for(int i=0;i<n;i++){
v[i]=l+i;
sum+=v[i];
if(i!=0){
if(abs(v[i-1])<abs(v[i])){
v[i]=v[i-1];
}
}
}
cout << sum-v[n-1];
}
