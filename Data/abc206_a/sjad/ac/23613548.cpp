#include <bits/stdc++.h>
using namespace std;
int main() {
int N, a;
cin >> N;
a = N * 1.08;
if(a < 206) {
cout << "Yay!";
}
if(a == 206) {
cout << "so-so";
}
if(a > 206) {
cout << ":(";
}
}
