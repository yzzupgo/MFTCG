#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
N *= 1.08;
if(N < 206) {
cout << "yay!" << endl;
} else if(N == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
