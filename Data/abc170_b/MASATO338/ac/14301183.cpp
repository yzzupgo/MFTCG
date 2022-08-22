#include <bits/stdc++.h>
using ll = long long;
using namespace std;
const int INFint = 1e9+1;
const ll INFll = (ll)1e18+1;
ll MOD=1e9+7;
int main(){
int x,y;
cin>>x>>y;
if(y-2*x >= 0 && (y-2*x) %2 ==0 && 4*x-y >= 0 && y%2==0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
