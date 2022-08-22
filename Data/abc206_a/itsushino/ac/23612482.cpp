#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
N = N * 1.08;
if(N < 206) {
cout << "Yay!" << endl;
} else if(N > 206) {
cout << ":(" << endl;
} else {
cout << "so-so" << endl;
}
}
