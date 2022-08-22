#include <bits/stdc++.h>
using namespace std;
int main() {
int N, O;
cin >> N;
O = N * 1.08;
if(O > 206) {
cout << ":(" << endl;
} else if(O == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
