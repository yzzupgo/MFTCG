#include <bits/stdc++.h>
using namespace std;
int main() {
int A;
cin >> A;
A = A * 1.08;
if(A < 206) {
cout << "Yay!" << endl;
} else if(A == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
