#include <bits/stdc++.h>
using namespace std;
#define dbg(x) { cerr << #x << " = " << x << "\n"; }
#define pb push_back
#define INF 0x3f3f3f3f
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
int main() {
ios_base::sync_with_stdio(false);
cin.tie(0);
int x, y;
cin >> x >> y;
int b = x, a = 0;
while(b >= 0){
if(b * 4 == y){
cout << "Yes\n";
return 0;
}
if(b * 4 < y){
a = 1;
while(b * 4 + a * 2 <= y && a + b <= x){
if(b * 4 + a * 2 == y){
cout << "Yes\n";
return 0;
}
a++;
}
}
b--;
}
cout << "No\n";
return 0;
}
