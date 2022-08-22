#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
cout << 1.08 * N << endl;
if(int(1.08 * N) < 206) {
cout << "Yay" << endl;
} else if(int(1.08 * N) == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
