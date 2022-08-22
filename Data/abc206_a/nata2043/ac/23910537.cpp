#include<bits/stdc++.h>
using namespace std;
int main() {
int a;
cin >> a;
a *= 1.08;
if(a < 206) {
cout << "Yay!" << endl;
}
if(a == 206) {
cout << "so-so" << endl;
}
if(a > 206) {
cout << ":(" << endl;
}
}
