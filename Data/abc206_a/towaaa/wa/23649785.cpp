#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
N = N * 1.08;
if(N >= 208) {
cout << ":(" << endl;
}
if(N <= 208) {
cout << "Yay!" << endl;
}
if(N == 208) {
cout << "so-so" << endl;
}
}
