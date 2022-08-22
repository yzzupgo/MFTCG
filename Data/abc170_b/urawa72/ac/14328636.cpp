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
int a = x * 2;
if(a == y){
cout << "Yes" << endl;
}else{
int b = y - a;
if(b < 0){
cout << "No" << endl;
return 0;
}
int c = b / 2;
int d = x - c;
if(0 <= d){
cout << "Yes" << endl;
}else {
cout << "No" << endl;
}
}
return 0;
}
