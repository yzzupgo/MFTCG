#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if((N * 108) / 100 < 206) {
cout << "Yay!" << endl;
} else if((N * 108) / 100 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
