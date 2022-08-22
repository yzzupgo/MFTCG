#include <bits/stdc++.h>
using namespace std;
int main() {
int A;
cin >> A;
if(A * 1.08 < 206) {
cout << "Yay!" << endl;
}
if(206 <= A * 1.08 && A * 1.08 < 207) {
cout << "so-so" << endl;
}
if(A * 1.08 >= 207) {
cout << ":(" << endl;
}
return 0;
}
