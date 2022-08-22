#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
freopen("in.txt", "r", stdin);
freopen("out.txt", "w", stdout);
#endif
int N;
cin >> N;
int R = 1.08 * N;
if(R < 206) {
cout << "Yay!";
} else if(R == 206) {
cout << "so-so";
} else if(R > 206) {
cout << ":(";
}
}
