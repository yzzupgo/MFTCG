#include <bits/stdc++.h>
using namespace std;
int main() {
int N, M, k, a1, a2, b1, b2, c1, c2, d1, d2, e1, e2;
cin >> N;
cin >> M;
if ( M % 2 == 1){
cout << "No" << endl;
}
else {
if ( M - 2 * N > 0){
cout << "No" << endl;
}
else {
if ( M - 4 * M > 0){
cout << "No" << endl;
}
else {
cout << "Yes" << endl;
}
}
}
}
