#include <bits/stdc++.h>
using namespace std;
int main() {
int t;
while(t--) {
int n;
cin >> n;
int k = (n * 108) / 100;
if(k < 206) {
cout << "Yey!";
}
if(k == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
}
