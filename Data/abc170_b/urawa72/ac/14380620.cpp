#include <bits/stdc++.h>
using namespace std;
#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30
int main() {
int x, y; cin >> x >> y;
if(y & 1){
cout << "No" << endl;
return 0;
}
for(int i = 0; i <= x; i++){
int w = x - i;
if(i * 2 + w * 4 == y){
cout << "Yes" << endl;
return 0;
}
}
cout << "No" << endl;
return 0;
}
