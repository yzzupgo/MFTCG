#include<bits/stdc++.h>
using namespace std;
signed main() {
int N;
cin >> N;
if(N * 1.08 < 206) {
cout << "Yay!\n";
} else if(round(N * 1.08) == 206) {
cout << "50-50\n";
} else {
cout << ":(\n";
}
}
