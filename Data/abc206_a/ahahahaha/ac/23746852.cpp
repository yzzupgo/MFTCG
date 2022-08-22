#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N ;
int (x) = 1.08 * N;
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else if(x > 206) {
cout << ":(" << endl;
}
}
