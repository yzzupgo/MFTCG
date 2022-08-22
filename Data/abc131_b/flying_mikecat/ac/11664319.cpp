#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll ze(ll x,ll y){
return max(x,y)-min(x,y);
};
int main(){
int n,l;
cin >> n >> l;
int mn=1e9,mn2=1e9;
int sum=0;
for(int i=0; i<n; i++){
if(mn>ze(l+i,0)){
mn2=l+i;
mn=ze(l+i,0);
};
sum+=l+i;
}
cout << sum - mn2 << endl;
}
