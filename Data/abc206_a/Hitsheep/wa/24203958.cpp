#include<bits/stdc++.h>
using namespace std;
signed main() {
int N;
cin >> N;
if(N * 1.08 < 206) {
cout << "Yay!\n";
} else if(N * 1.08 > 206) {
cout << ":(\n";
} else {
cout << "50-50\n";
}
}
