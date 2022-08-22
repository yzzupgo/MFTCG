#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int left = (n * 108) / 100;
if(n < 206) {
cout << "Yay!";
} else if(n == 206) {
cout << "so-so";
} else {
cout << ":(";
}
}
