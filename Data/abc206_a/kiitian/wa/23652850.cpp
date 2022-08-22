#include <bits/stdc++.h>
using namespace std;
int main() {
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int N;
cin >> N;
int tax = N * 1.08;
if(tax < 206) {
cout << "Yay!" << endl;
} else if(tax == 206) {
cout << "so-so;" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
