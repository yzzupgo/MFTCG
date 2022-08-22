#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int X = N * 1.08;
if(X < 206) {
cout << "Yay!" << endl;
} else if(X == 206) {
cout << "so-so" << endl;
} else if(X > 206) {
cout << ":(" << endl;
}
}
