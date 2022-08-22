#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int c = n * 1.08;
if(c > 206) {
cout << ":(";
}
if(c < 206) {
cout << "Yay!";
}
if(c == 206) {
cout << "so-so";
}
}
