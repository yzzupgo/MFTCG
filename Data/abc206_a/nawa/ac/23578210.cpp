#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int t = 1.08 * N;
if(t < 206) {
cout << "Yay!" << endl;
} else if(t == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
