#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int res = 1.08 * N;
cout << res << endl;
if(206 < res) {
cout << ":(" << endl;
} else if(206 == res) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
