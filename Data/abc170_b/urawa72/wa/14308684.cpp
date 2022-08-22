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
int a = x * 2;
if(y <= a){
cout << "Yes" << endl;
return 0;
}
int b = y - a;
int c = b / 2;
int d = x - c;
if(0 < d){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
