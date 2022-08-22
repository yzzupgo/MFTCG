#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
int x;
cin >> x;
int b, a = x * 1.08 ;
b = 206;
if(a > b) {
cout << ":(" << endl;
} else if(a < b) {
cout << "Yah!" << endl;
} else {
cout << "so-so" << endl;
}
}
