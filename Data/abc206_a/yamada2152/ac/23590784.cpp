#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int x;
x = floor(1.08 * N);
if(x < 206) {
cout << "Yay!" << endl;
} else if(x > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
