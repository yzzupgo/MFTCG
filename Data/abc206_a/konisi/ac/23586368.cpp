#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if(N * 1.08 < 206) {
cout << "Yay!" << endl;
} else if(N * 1.08 > 207 && N * 1.08 <= 324) {
cout << ":(" << endl;
} else if(N * 1.08 > 205 && N * 1.08 < 207) {
cout << "so-so" << endl;
}
}
