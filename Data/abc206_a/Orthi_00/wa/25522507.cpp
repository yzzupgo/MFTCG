#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
float s;
s = (n * 1.08);
if(s < 206) {
cout << "Yay!" << endl;
}
if(s > 206) {
cout << ":(" << endl;
} else if(s == 206) {
cout << "so-so" << endl;
}
}
