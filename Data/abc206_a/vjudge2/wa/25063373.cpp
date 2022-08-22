#include<bits/stdc++.h>
using namespace std;
int main() {
float a, x;
cin >> a;
x = (a * 108) / 100;
if(x < 206) {
cout << "Yay!" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
