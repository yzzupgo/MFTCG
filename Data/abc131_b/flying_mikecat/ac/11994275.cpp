#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ze(ll x,ll y=0){
return max(x,y)-min(x,y);
};
int main(){
int n,l;
cin >> n >> l;
vector<int> v(n);
int mn=10000000;
int memo;
for(int i=0; i<n; i++){
v[i]=(l+i);
if(mn>ze(l+i)){
mn=ze(l+i);
memo=i;
}
}
ll sum=0;
for(int i=0; i<n; i++){
sum+=v[i];
}
cout << sum-v[memo] << endl;
}
