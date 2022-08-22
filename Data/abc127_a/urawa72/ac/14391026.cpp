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
int a, b; cin >> a >> b;
if(a <= 5){
cout << 0 << endl;
}else if(6 <= a && a <= 12){
cout << b / 2 << endl;
}else{
cout << b << endl;
}
return 0;
}
