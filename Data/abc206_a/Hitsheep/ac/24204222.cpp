#include<bits/stdc++.h>
using namespace std;
signed main() {
int N;
cin >> N;
int rounded = (N * 108) / 100;
if(rounded < 206) {
cout << "Yay!\n";
} else if(rounded == 206) {
cout << "so-so\n";
} else {
cout << ":(\n";
}
}
