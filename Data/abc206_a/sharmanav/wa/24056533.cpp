#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
int k = (1.08) * n;
if(k < 206) {
cout << "Yay";
} else if(k == 206) {
cout << "so so";
} else {
cout << ":(";
}
return 0;
}
