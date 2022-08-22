#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
N *= 1.08;
if((int)N < 206) {
cout << "yey!" << endl;
} else if((int)N == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
