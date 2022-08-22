#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define deb(x) cout << #x << " " << x << endl;
typedef long long int ll;
int main() {
IOS
int n, legs;
cin >> n >> legs;
bool pos = false;
for (int i = 0; i <= n; i++) {
if (legs == (i*2 + (n-i)*4)) {
deb(i);
pos = true;
break;
}
}
cout << (pos ? "Yes" : "No");
return 0;
}
