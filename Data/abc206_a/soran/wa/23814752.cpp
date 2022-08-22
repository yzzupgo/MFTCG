#include <bits/stdc++.h>
using namespace std;
int main() {
int A;
cin >> A;
if(A * 1.08 < 206) {
cout << "Yay!" << endl;
} else if(A * 1.08 == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
