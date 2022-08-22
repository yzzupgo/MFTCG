#include<bits/stdc++.h>
using namespace std;
string result(int n);
int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
cout << result(n);
getchar();
return 0;
}
string result(int n) {
float b = 1.08 * n;
int a = b;
if(a < 206) {
return "Yay!";
} else if(a == 206) {
return "so-so";
} else {
return ":(";
}
}
