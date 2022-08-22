#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int val = n * 1.08;
int upper = 206;
cout << val << endl;
if(val < upper) {
cout << "Yay!" << endl;
} else if(val == upper) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
