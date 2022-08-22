#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int a, b;
a = n * 1.08;
cout << a << endl;
if(a > 206) {
cout << ":(" << endl;
} else if(a == 206) {
cout << "so-so" << endl;
} else {
cout << "Yay!" << endl;
}
}
