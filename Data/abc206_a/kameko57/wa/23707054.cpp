#include <bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int val = n * 1.08;
int upper = 206;
if(val < upper) {
cout << "Yes!" << endl;
} else if(val == upper) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
