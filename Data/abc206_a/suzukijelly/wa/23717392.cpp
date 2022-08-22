#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if(N * 1.08 < 206) {
cout << "Yey!" << endl;
} else if(N * 1.08 >= 207) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
