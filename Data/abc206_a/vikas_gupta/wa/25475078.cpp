#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
t = 1;
while(t--) {
int n;
cin >> n;
int k = (n * 108) / 100;
if(k < 206) {
cout << "Yay!";
}
if(k == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
}
