#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int ans = 1.08 * N;
if(ans < 206) {
cout << "Yay!" << endl;
} else if(ans == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
