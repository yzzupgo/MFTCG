#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
N = 1.08 * N;
if(N < 206) {
cout << "Yay!" << endl;
}
if(N = 206) {
cout << "so-so" << endl;
}
if(N > 206) {
cout << ":(" << endl;
}
return 0;
}
