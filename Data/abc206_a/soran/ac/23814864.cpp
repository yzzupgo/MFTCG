#include <bits/stdc++.h>
using namespace std;
int main() {
int A;
cin >> A;
A *= 1.08;
if((int)A < 206) {
cout << "Yay!" << endl;
} else if(A == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
