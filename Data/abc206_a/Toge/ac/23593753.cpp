#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int x = N + N / 12.5;
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else if(x > 206) {
cout << ":(" << endl;
}
}
