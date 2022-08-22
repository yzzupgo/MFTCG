#include <bits/stdc++.h>
using namespace std;
int main() {
int N, A;
cin >> N;
A = N * 1.08;
if(A >= 206) {
cout << "Yay!" << endl;
} else if(A <= 206) {
cout << ":(" << endl;
} else if(A == 206) {
cout << "so-so" << endl;
}
}
