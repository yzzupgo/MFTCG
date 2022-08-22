#include<bits/stdc++.h>
using namespace std;
using lint = long long;
using P = pair<int, int>;
const int INF = 1e9;
const int mod = 1000000007;
#define all(a) (a).begin(),(a).end()
inline lint fcl(lint num){
if(num > 0) return num * fcl(num - 1);
else return 1;
}
int main(){
int x, y;
cin >> x >> y;
if(y < 4 * x && y > 2 * x && y % 2 == 0) cout << "Yes";
else cout << "No";
}
