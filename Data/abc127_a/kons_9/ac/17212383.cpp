#include <bits/stdc++.h>
#define MAX_N 10000
#define INF 1e9
using namespace std;
typedef int long long ll;
typedef int long l;
typedef pair<int, int> Pii;
const ll MOD = 1000000007;
int main() {
cin.tie(0);
ios::sync_with_stdio(false);
int a, b;
cin >> a >> b;
if(a>=13){
cout << b << endl;
}else if(5>=a){
cout << 0 << endl;
}else{
cout << b/2 << endl;
}
return 0;
}
