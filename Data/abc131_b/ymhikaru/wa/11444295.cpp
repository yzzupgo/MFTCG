#include<bits/stdc++.h>
using namespace std;
#define REP(i,n) for(int i=0, i ##_len=(n); i<i ##_len; ++i)
typedef long long ll;
#define pb push_back
void solve(){
int n, l;
cin >> n >> l;
vector<int> a(n);
REP(i, n){
a[i] += l+i;
}
int sum = 0;
REP(i, n) sum += a[i];
if(l >= 0){
cout << sum - a[0] << endl;
exit(0);
}
if((n-1)+l >= 0){
cout << 0 << endl;
}
else{
cout << sum - a[n-1] << endl;
}
}
int main(){
cin.tie(0);
ios::sync_with_stdio(false);
solve();
}
