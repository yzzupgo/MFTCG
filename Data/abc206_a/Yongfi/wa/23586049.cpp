#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int teika = 206;
int value = N * 1.08;
if(value < teika) {
cout << "Yey!" << endl;
} else if(value == teika) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
