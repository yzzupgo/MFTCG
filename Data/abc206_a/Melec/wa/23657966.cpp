#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
N *= 1.08;
if((int)N < 206) {
cout << "Yey!" << N << endl;
} else if((int)N == 206) {
cout << "so-so" << N << endl;
} else {
cout << ":(" << N << endl;
}
return 0;
}
