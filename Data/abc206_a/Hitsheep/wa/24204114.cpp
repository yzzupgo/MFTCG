#include<bits/stdc++.h>
using namespace std;
signed main() {
int N;
cin >> N;
int rounded = round(N * 1.08);
if(rounded < 206) {
cout << "Yay!\n";
} else if(rounded == 206) {
cout << "50-50\n";
} else {
cout << ":(\n";
}
}
