#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll INF = 1LL << 60;
const ll MOD = 1e9+7;
int main(){
int n, l;
cin >> n >> l;
vector<int> fla(n);
int sum, m=101010;
for(int i=0; i<n; i++){
fla[i]=l+i;
sum+=fla[i];
m=min(m, abs(fla[i]));
}
if(sum<=0) cout << sum+m << endl;
else cout << sum-m << endl;
return 0;
}
