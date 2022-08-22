#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
double x;
int k;
x = 1.08 * n;
k = floor(x);
if(k < 206) {
cout << "Yay!" << endl;
} else if(k == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
