#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if(N * 1.08 > 206) {
cout << ":(" << endl;
} else if(N * 1.08 == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
