#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int ans = floor(1.08 * n);
if(ans == 206) {
cout << "so-so" << endl;
} else if(ans > 206) {
cout << ":(" << endl;
} else {
cout << "yey!" << endl;
}
}
