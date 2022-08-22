#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int ans = 0;
bool fin = true;
if(n > 999) ans += 9;
else ans += n, fin = false;
if(fin){
if(n > 99999) ans += 900;
else ans += n - 99, fin = false;
}
if(fin){
if(n > 99999) ans += 90000;
else ans += n - 9999;
}
cout << ans << endl;
}
