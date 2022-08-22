#include<bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int n;
cin >> n;
if(floor(n * 1.08) > 206) {
cout << ":(\n";
} else if(floor(n * 1.08) == 206) {
cout << "so-so\n";
} else {
cout << "Yay!\n";
}
return 0;
}
