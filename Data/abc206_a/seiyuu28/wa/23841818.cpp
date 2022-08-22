#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int onedan = N * 1.08;
if(onedan <= 205) {
cout << "Yey!" << endl;
} else if(onedan == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
