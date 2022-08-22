#include <bits/stdc++.h>
using namespace std;
struct Fast { Fast() { cin.tie(0); ios::sync_with_stdio(false); cout << fixed << setprecision(20);} } fast;
int main() {
int a, b;
cin >> a >> b;
if (a > 12){
cout << b;
}else if (a < 5){
cout << 0;
}else{
cout << b/2;
}
}
